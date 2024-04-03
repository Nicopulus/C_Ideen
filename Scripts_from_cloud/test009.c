#include <stdio.h>
#include <stdlib.h>

void my_first_function();

int main() {
	my_first_function("Hannah", 27);
	my_first_function("Ivan", 38);
	my_first_function("Miguel", 35);
	return 0;
}

void my_first_function(char name[], int age) {
	printf("Hi people I am %s and %d.\n", name, age);
}