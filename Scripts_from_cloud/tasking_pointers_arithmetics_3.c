//https://youtu.be/zuegQmMdy8M?t=2463
#include <stdio.h>

int main(){

	int x = 1025; // integer
	int *p = &x;
	*p = 6; // dereferencing
	
	int **q = &p; // -> it stores the address of *p and *q the value
	int ***r = &q;  // -> -> it stores the address of **q and **r the value
	
	printf("The value of x is: %d\n", x);
	printf("The value of *p is: %d\n", *p);
	printf("The value of *q is: %d\n", *q);
	printf("The value of **q is: %d\n", **q);
	printf("The value of **r is: %d\n", **r);
	printf("The value of ***r is: %d\n", ***r);
	
	***r = 10; // -> 10
	printf("The value of ***r or x is: %d\n", x);
	
	**q = *p + 2; // -> 12
	printf("The value of **q or x is: %d", x);
	
	return 0;
}
//gcc -o D:\C_Sprache\Exes\tasking_pointers_arithmetics_3.exe D:\C_Sprache\Tests\tasking_pointers_arithmetics_3.c