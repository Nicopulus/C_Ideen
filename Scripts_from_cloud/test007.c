#include <stdio.h>
#include <stdlib.h>
int main() {

	int numbers[] = {4, 8, 15, 16, 23, 42};
    printf("%d\n", numbers[3]);
    numbers[3] = 200;
    printf("%d", numbers[3]);
	return 0;
}