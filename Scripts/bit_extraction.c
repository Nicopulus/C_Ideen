#include <stdio.h>
#include <stdint.h>

int16_t data_raw = 0xB410;
uint8_t data_manipulated, data_extracted;

int main(){
    
    data_manipulated = (data_raw >> 9);

    printf("Raw data: %X\n", data_raw);
    printf("Data after shifting: %X\n", data_manipulated);

    data_manipulated &= 0x3F;
    printf("Data after masking: %X\n", data_manipulated);

    data_extracted = (data_raw >> 9) & 0x3F;
    printf("Data extracted: %X\n", data_extracted);

    return 0;
}