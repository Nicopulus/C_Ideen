//Characters, Strings and Pointers
//gcc -o D:\C_Sprache\Exes\tasking_pointers_char_str_0.exe D:\C_Sprache\Tests\tasking_pointers_char_str_0.c 
//gcc -o /home/nikkitox10/c_ideas/test_anwendungen/tasking_pointers_char_str_0.exe /home/nikkitox10/c_ideas/test_skripte/tasking_pointers_char_str_0.c
//To read -> later
// https://medium.com/geekculture/what-i-have-learned-from-2-years-of-building-software-side-hustles-eb634acadeb5
//https://medium.com/codex/a-senior-programmer-told-me-5-secrets-to-improve-in-programming-458bedaea774

#include<stdio.h>
#include<string.h>

int main (){
	
	// char C[20];
	// C[0] = 'J';
	// C[1] = 'O';
	// C[2] = 'H';
	// C[3] = 'N';
	// C[4] = '\0';
	char C[20] = "JOHN";
	int len = strlen(C);
	
	printf("The content of string C is: %s\n", C);
	printf("The length of string C is: %d\n", len);
	
	return 0;
}
//https://youtu.be/zuegQmMdy8M?t=5203