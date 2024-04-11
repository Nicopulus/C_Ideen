#include <stdio.h>

int main(){
    char a1 = "H";
    char a2 = "O";
    char a3 = "L";
    char a4 = "A";

    printf("Address of variable A1: %p\n", &a1);
    printf("Address of variable B2: %p\n", &a2);
    printf("Address of variable C3: %p\n", &a3);
    printf("Address of variable D4: %p\n", &a4);

    return 0;
}