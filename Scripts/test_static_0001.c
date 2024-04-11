#include <stdio.h>

void my_func(void);

int main(){

    my_func();
    my_func();
    my_func();

    return 0;
}

void my_func(void){
    static int count = 0;
    count = count +1;
    printf("The prototype function was called %d time(s).\n", count);
}