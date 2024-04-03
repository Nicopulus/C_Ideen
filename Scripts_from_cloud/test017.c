#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
	int i = 0;
	
	printf("This is the While-Loop:\n");
	while (i <= 5){
		printf("%d\n", i);
		i++;
	}

	printf("Now, the For-Loop:\n");
	for (i = 0; i <= 5; i++){
		printf("%d\n", i);
	}
	
	printf("Now the Lucky Numbers Array:\n");
		for (i = 0; i <= 5; i++){
		printf("%d\n", luckyNumbers[i]);
	}
	
	return 0;
} 