#include <stdio.h>

int a = 5;

int main(){
    a = 25;
    {
        int my_var;
        my_var = 47;
        printf("00 - Value of a is: %d\n", a);
        printf("01 - Value of my_var is: %d\n", my_var);
    }

    int my_var;
    printf("02 - Value of my_var is: %d\n", my_var);
    my_var = my_var + 10;
    printf("03 - Value of my_var is: %d\n", my_var);

    return 0;
}