#include <stdio.h>
//Pointer Arithmetic
/*
int* -> int 
char* -> char

int -> 4 bytes
char -> 1 byte
float -> 4 bytes
*/

int main(){

	int ab = 1025; // integer
	int *p;
	p = &ab; // pointer to integer element
	
	printf("Size of integers in C: %d bytes\n", sizeof(int));
	printf("Address = %d, Value = %d\n", p, *p);
	printf("Address = %d, Value = %d\n", p + 1, *(p + 1));
	
	char *p0;
	p0 = (char*)p;
	
	printf("Size of chars in C: %d bytes\n", sizeof(char));
	printf("Address = %d, Value = %d, Extra = %d\n", p0, *p0, *&ab);
	// 1025 = 00000000 00000000 00000100 00000001 -> 00000001 = p0
	printf("Address = %d, Value = %d\n", p0 + 1, *(p0 + 1));
	
	return 0;
}
//https://youtu.be/zuegQmMdy8M?t=1699
//gcc -o D:\C_Sprache\Exes\tasking_pointers_arithmetics_2.exe D:\C_Sprache\Tests\tasking_pointers_arithmetics_2.c