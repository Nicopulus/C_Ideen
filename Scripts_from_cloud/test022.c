#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE * fpointer = fopen("c:\\temp\\employees.txt", "a");
	//*fprintf(fpointer, "Hola mundoooo, como vassss.\n");*//
	fprintf(fpointer, "Nico is trying lo lern C.\n");
	fclose(fpointer);
	return 0;
}