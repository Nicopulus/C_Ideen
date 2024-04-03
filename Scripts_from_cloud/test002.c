#include <stdio.h>

// int main() {
	// int i;
	
	// for (i = 1;i < 11; i++) {
		// if (i < 10) {
			// printf("%d, ", i);
		// }
		// else {
			// printf("%d", i);
		// }
	// }
	// return(0);
// }

// int main() {
	// int num;
	// int count;
	// int sum = 0;
	
	// printf("Print a positive integer: ");
	// scanf("%d", &num);
	
	// for (count = 0; count <= num; ++count) {
		// sum += count;
	// }
	// printf("Sum = %d", sum);
	
	// return 0;
// }

// void main(hola, como, estas) {
	
// }

// int main() {
	// int i = 0;
	
	// while (i <= 5) {
		// printf("%d\n", i);
		// ++i;
	// }
	
	// return 0;
// }

int main() {
	double number;
	double sum = 0;
	
	do {
		printf("Enter a number: ");
		scanf("%lf", &number);
		sum += number;
	}
	while (number != 0.0);
	
	printf("Sum = %.2lf", sum);
	
	return 0;
}