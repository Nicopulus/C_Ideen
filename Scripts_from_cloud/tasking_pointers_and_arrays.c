#include <stdio.h>

int main(){
	int a = 50;
	int *p;
	p = &a;
	
	printf("Value in pointer *p: %d\n", *p);
	printf("Address stored in pointer *p: %d\n", p);
	p = p + 1;
	printf("Address stored in pointer *p: %d\n", p);
	printf("New value in pointer p: %d\n", p);
	
	int A[] =  {2, 4, 5, 8, 1};
	printf("%d\n", A);
	printf("%d\n", &A[0]);
	printf("%d\n", A[0]);
	printf("%d\n", *A);
	int i;
	for (i = 0; i < 5; i++){
		printf("Address -> &A[%d] = %d\n",i, &A[i]);
		printf("Address -> A+%d = %d\n", i, A+i);
		printf("Value -> A[%d] = %d\n", i, A[i]);
		printf("Value -> *(A+%d) = %d\n", i, *(A+i));
	}
	// int *p is equivalent to A
	// A++ is invalid
	// p++ is valid
	return 0;
}

// https://youtu.be/zuegQmMdy8M?t=3962
//gcc -o D:\C_Sprache\Exes\tasking_pointers_and_arrays.exe D:\C_Sprache\Tests\tasking_pointers_and_arrays.c