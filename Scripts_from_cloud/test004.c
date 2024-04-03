#include <stdio.h>

int main() {
	
	printf("Current date: %s\n", __DATE__);
	printf("C-Filename: %s\n", __FILE__);
	printf("Line of c-file: %d\n", __LINE__);
	printf("Standard ANSI (1 = No, 0 = Yes): %d\n", __STDC__);
	printf("Current time: %s\n", __TIME__);
	return 0;
}

