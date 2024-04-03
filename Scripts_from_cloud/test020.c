#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int age = 30;
	int * p_age = &age;
	
	double gpa = 3.4;
	double * p_gpa = &gpa;
	
	char grade = 'A';
	char * p_grade = &grade;
	
	printf("Age's memory address: %d\n", p_age);
	printf("Gpa's memory address: %d\n", p_gpa);
	printf("Grade's memory address: %d\n", p_grade);
	
	return 0;
}
