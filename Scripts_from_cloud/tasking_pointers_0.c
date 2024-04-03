//https://youtu.be/zuegQmMdy8M?t=467
#include <stdio.h>

int main(){

	int a;
	int *p;
	
	p = &a; //p will have the value of the address of a
	a = 5;
	
	printf("The value of a is: %d\n", a);
	printf("The value of pointer p is: %p\n", p);
	printf("The value of &a is: %p\n", &a);
	printf("The value of &p is: %p\n", &p);
	printf("Value of p (dereferencing) is: %d", *p);
	return 0;
}