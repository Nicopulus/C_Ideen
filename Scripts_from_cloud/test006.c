#include <stdio.h>

int main() {
	
	char name1[30];
	char name2[30];
	printf("Enter your name: \n");
	fgets(name1, 30, stdin);
	//scanf("%s", name1, name2)
	printf("Your name is: %s", name1);
	
	return 0;
}