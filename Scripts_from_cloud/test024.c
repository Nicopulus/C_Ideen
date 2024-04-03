#include <stdio.h>

// int main() {
	
	// int var = 5;
	// printf("The value of 'var' is: %d\n", var);
	
	// printf("The addrss of 'var' is: %p\n", &var);
	// return 0;
// }

int main() {
	
	int *p_number, number;
	
	number = 5;
	p_number = &number;
	
	printf("The value of 'number' is: %d\n", number);
	printf("The pointer of 'number' is: %d\n", p_number);
	printf("The pointer of 'number' in hex is: %p\n", p_number);
	printf("The pointer 'p_number' address the value: %d\n", *p_number);
	return 0;
}

