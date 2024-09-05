#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);
int8_t i=0, mask=0x1, upper_limit, lower_limit, result;
uint32_t even_count =0, temp_value;

void main(){

    printf("Define an lower limit to calculate: ");
    scanf("%d", &lower_limit);
    printf("Define an upper limit to calculate: ");
    scanf("%d", &upper_limit);

    for (printf("Even values found:\n"); lower_limit <= upper_limit; lower_limit++){
        result = lower_limit & mask;
        if (result == 0){
            printf("%d\t", lower_limit);
            even_count ++;
        }else{
            ;
        };
    }
    printf("\nThe total of even numbers was: %d\n", even_count);
    
    i=1;
    
    for (printf("\nNow the pyramid of values is:\n"); i <= upper_limit;printf("\n"), i++){
        for (temp_value = (uint32_t) i; temp_value > 0; temp_value --){
            printf("%d\t", temp_value);
        }
    }
    wait_for_user_input();
}

void wait_for_user_input(void){
    printf("Press enter to continue.");
    while(getchar() != '\n'){
    }
}