#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double third_power();

int main(){
	printf("The cube of 2 is %f\n", third_power(2.0));
	return 0;
}

double third_power(double number){
	double result;
	result = pow(number, 3);
	return result;
}