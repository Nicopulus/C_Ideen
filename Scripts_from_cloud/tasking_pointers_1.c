#include <stdio.h>

int main(){

	int a; // integer
	int *p; // pointer to integer element
	
	char c; // character
	char *p0; // pointer to character element
	
	double d; // double
	double *p1; // pointer to double
	
	a = 10;
	p = &a; //p will have the value of the address of a
	printf("The value of a is: %d\n", a);
	printf("The Address saved in p is: %d\n", p);
	printf("The Value at p is: %d\n\n", *p);
	
	*p = 12; //dereferencing value of a
	printf("The value of a after dereferencing is: %d\n\n", a);
	
	int b = 20;
	*p = b;
	
 	printf("Address saved in p is: %d\n", p);
	printf("The value at p is: %d\n", *p);
	
/*	printf("The value of &p is: %p\n", &p);
	printf("Value of p (dereferencing) is: %d", *p); */
	return 0;
}
//https://youtu.be/zuegQmMdy8M?t=1002
//D:\C_Sprache>gcc -o D:\C_Sprache\Exes\tasking_pointers.exe D:\C_Sprache\Tests\tasking_pointers_1.c