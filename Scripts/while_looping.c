#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

void main(){
    int8_t i=1;

    while(i<=10){
        // printf("%d\n", i);
        // i++;
        printf("%d\n", i++);

    }
    wait_for_user_input();
}

void wait_for_user_input(void){
    printf("Press enter to continue.");
    while( getchar() != '\n'){
    }
}