#include <stdio.h>

/*function declaration*/
int max(int num1, int num2);

int main() {
	int a;
	int b;
	int ret;
	
	printf("Write a first integer: \n");
	scanf("%d", &a);
	
	printf("Write a second integer: \n");
	scanf("%d", &b);
	
	/*calling function to get the maximum between 2 numbers*/
	ret = max(a, b);
	
	printf("The maximum value is: %d\n", ret);
	return 0;
}
/*definition of the function*/
int max(int num1, int num2) {
	
	/*This is an internal value to send the output*/
	int result;
	
	if (num1 > num2)
		result = num1;
	else 
		result = num2;
	
	return result;
}
