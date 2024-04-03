#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int secretNumber = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outofGuesses = 0;
	
	while (guess != secretNumber && outofGuesses == 0){
		if (guessCount < guessLimit){
			printf("Enter a number: ");
			scanf("%d", &guess);
			guessCount++;
		}
		else{
			outofGuesses = 1;
		}
	}
	if (outofGuesses == 0){
		printf("You Win!\n");
	}
	else{
		printf("You Lost!, out of Guesses!\n");
	}
	return 0;
}