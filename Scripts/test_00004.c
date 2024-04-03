#include <stdio.h>

#define LOWER_LIMIT 0
#define UPPER_LIMIT 300

int main(){
    int temp_c;
    float temp_f;
    char grad;

    grad = 0xf8;

    for (temp_c = UPPER_LIMIT; temp_c >= LOWER_LIMIT; temp_c --){
        temp_f = ((9.0 / 5.0) * temp_c) + 32.0;
        printf("Die Temperature ist: %d [%cC] und %5.1f [%cF]\n", temp_c, grad, temp_f, grad);
    }
}

//temp_c = (5.0 / 9.0) * (temp_f - 32)
//temp_f = [(9.0 / 5.0) * temp_c] + 32