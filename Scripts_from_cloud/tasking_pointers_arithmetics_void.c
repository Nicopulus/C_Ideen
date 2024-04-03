#include <stdio.h>

int main(){

	int ab = 1025; // integer
	int *p;
	p = &ab; // pointer to integer element
	
	printf("Size of integers in C: %d bytes\n", sizeof(int));
	printf("Address = %d, Value = %d\n", p, *p);
	//Void pointer - Generic pointer
	
	void *p0;
	p0 = p;
	//printf("Address = %d, value = %d\n", p0, *p0); error prompt
	printf("Address = %d.\n", p0);
	printf("Address + 1 = %d.\n", p0+1);
	
	return 0;
}