#include <stdio.h>
#include <stdlib.h>

int function_maximum_2();
int function_maximum_3();


int main(){
	int n0 = 13;
	int n1 = 7;
	int n2 = 67;
	
	printf("The maximum value between %d and %d is: %d\n", n0, n1, function_maximum_2(n0, n1));
	printf("The maximum value between %d, %d and %d is: %d\n", n0, n1, n2, function_maximum_3(n0, n1, n2));
	return 0;
}

int function_maximum_2(int num1, int num2){
	int result;
	if (num1 > num2){
		result = num1;
	}
	else {
		result = num2;
	}
	return result;
}

int function_maximum_3(int num1, int num2, int num3){
	int result;
	if (num1 >= num2 && num1 >=num3){
		result = num1;
	}
	else if(num2 >= num1 && num2 >= num3){
		result = num2;
	}
	else{
		result = num3;
	}
	return result;
}