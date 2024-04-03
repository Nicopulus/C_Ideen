#include <stdio.h>
//Pointeer Arithmetic
int main(){

	int a = 10; // integer
	int *p;
	p = &a; // pointer to integer element
	
	printf("The Address of pointer p is: %d\n", p);
	printf("The value at p is: %d\n", *p );

	printf("The size of an integer in C is: %d bytes\n", sizeof(p+1));

	printf("The value of p+1 is: %d\n", p+1);
	printf("The value at address p+1 is: %d\n", *(p+1));
	return 0;
}