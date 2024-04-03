#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define MAX_ARRAY_LENGTH 10
#define MAIN_TASK_SIG__SUSPEND 1
#define MAIN_TASK_SIG__RESUME  2
#define MAIN_TASK_SIG__STAT    3

#define CELCIUS_TO_FAHRENHEIT(X) (((X*9)/5))+32
#define FAHRENHEIT_TO_CELCIUS(X) (X-32)*5/9

#define ITOA(X) "%f", X
#define START 0.04
#define START_PLOT ITOA(START*1000)

int main(void){
    float zeroinC = 0.0;
    float tempinC = 46.3;

    float zeroinF = 32.0;
    float tempinF = 450.0;

    float num = 18.0;
    
    printf("Hola Mundo\n");
    printf("%d, %d, %d\n", MAIN_TASK_SIG__SUSPEND, MAIN_TASK_SIG__RESUME, MAIN_TASK_SIG__STAT);
    printf("%.2f °C es: %.2f °F\n",  tempinC, CELCIUS_TO_FAHRENHEIT(tempinC));    
    printf("%.2f °C es: %.2f °F\n",  zeroinC, CELCIUS_TO_FAHRENHEIT(zeroinC));

    printf("%.2f °F es: %.2f °C\n",  zeroinF, FAHRENHEIT_TO_CELCIUS(zeroinF));
    printf("%.2f °F es: %.2f °C\n",  tempinF, FAHRENHEIT_TO_CELCIUS(tempinF));

    //printf("MACRO's value --> %.2f\n", START_PLOT);

    return 0;
}