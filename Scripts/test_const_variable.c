#include <stdio.h>
#include <stdint.h>

uint8_t const data_0 = 10;

int main() {

    printf("Address of data_0: %p", &data_0);
    printf("\nAddress of data_0: %d", data_0);

    uint8_t *p_data_0 = (uint8_t*) &data_0;// dereferencing and reading value in a pointer variable
    *p_data_0 = 50; // writing value in the pointer variable

    printf("\nAddress of data_0: %d", data_0);


    return 0;
}