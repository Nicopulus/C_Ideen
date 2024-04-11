#include <stdio.h>

int main(){
    char a1 = "H";

    unsigned long int address_a1 = (unsigned long int)&a1;

    printf("001_Address of variable a1: %lld\n", address_a1);
    printf("002_Address of variable a1: %I64d\n", address_a1);
    printf("003_Address of variable a1: %I64x\n", address_a1);

    return 0;
}