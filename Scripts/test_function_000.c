#include <stdio.h>

void add_numbers(int a, int b, int c);

int main(){

    add_numbers(4,3,6);
    add_numbers(10,11,12);

    int val_a = 60, val_b = 70;

    add_numbers(val_a, val_b, 80);
    
    return 0;
}

void add_numbers(int a, int b, int c){
    int sum;    
    sum = a+b+c;
    
    printf("The summe of %d, %d and %d is: %d\n", a, b, c, sum);
}