#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int secretNumber = 12;
	int guess;
	
	while (guess != secretNumber) {
		printf("Enter a number: ");
		scanf("%d", &guess);
	}
	
	printf("Good job!\n");

	return 0;
}