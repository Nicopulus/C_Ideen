#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);
int8_t i=0, mask=0x1, upper_limit, lower_limit, result;
uint32_t even_count =0;

void main(){

    printf("Define an lower limit to calculate: ");
    scanf("%d", &lower_limit);
    printf("Define an upper limit to calculate: ");
    scanf("%d", &upper_limit);

    printf("Even values found:\n");
    printf("20 per 2: %d\n", 20 % 2);
    while(lower_limit <= upper_limit){
        result = lower_limit & mask;
        if (result == 0){
            printf("%d\t", lower_limit);
            even_count ++;
        }else{
            ;
        }
        lower_limit++;
    }
    //     while(i<=100){
    //     result = i & mask;
    //     // printf("Current result: %X\n", result);
    //     if (result == 0){
    //         printf("Even value found: %d\n", i);
    //         even_count ++;
    //     }else{
    //         ;
    //     }
    //     i++;
    // }
    printf("\nThe total of even numbers was: %d\n", even_count);
    wait_for_user_input();
}

void wait_for_user_input(void){
    printf("Press enter to continue.");
    while(getchar() != '\n'){
    }
}