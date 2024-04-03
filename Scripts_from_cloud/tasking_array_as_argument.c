//Arrays as function arguments
#include <stdio.h>

int sumofelements_0(int A[], int size_of_array){
	int i;
	int sum = 0;
	
	for (i = 0;i < size_of_array; i++){
		sum += A[i]; //equal to -> sum = sum + A[i];
	}
	return sum;
}

int main_0(){
	int A[] = {1,2,3,4,5};
	int size_of_array;
	int total;
	
	size_of_array = sizeof(A)/sizeof(A[0]);
	total = sumofelements_0(A, size_of_array);
	
	printf("Summe of all array elements: %d\n", total);
	return 0;
}

int sumofelements(int *A, int size_A){ //int A[] = int * A
	int i;
	int sum = 0;
	
	for (i = 0; i < size_A; i++){
		sum += A[i]; //equal to -> sum = sum + A[i];
	}
	return sum;
}

void make_it_double(int *A, int size_A){
	int i;
	for (i = 0; i < size_A; i++){
		A[i] = 2*A[i]; //equal to -> sum = sum + A[i];
	}
}

int main(){
	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = sumofelements(A, size);
	printf("Summe of all array elements: %d\n", total);

	make_it_double(A, size);
	int i;
	for (i = 0; i < size; i++){
		printf("%d ", A[i]);
	}
	return 0;
}


//https://youtu.be/zuegQmMdy8M?t=4107
//gcc -o D:\C_Sprache\Exes\tasking_array_as_argument.exe D:\C_Sprache\Tests\tasking_array_as_argument.c