#include <stdio.h>

void Increment (int *x) {
	*x = *x + 1;
}

int main () {
	int a = 10;
	int *p = &a;
	Increment(p);
	printf("The value of a is: %d", a);
	
	return 0;
}


//https://youtu.be/zuegQmMdy8M?t=3401
//gcc -o D:\C_Sprache\Exes\tasking_pointers_argument.exe D:\C_Sprache\Tests\tasking_pointers_argument.c