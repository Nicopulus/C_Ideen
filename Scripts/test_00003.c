#include <stdio.h>

int main(){
    char str1[30];
    char c;
    int i = 0;

    printf("Enter a string with max. 30 elements:\n");
    scanf("%s", str1);
    printf("The given string was: ");
    
    while (c != EOF){
        c = str1[i];
        ++i;
        if (c != '\n' || c != '\r')
            putchar(c);
    }
    return 0;
}