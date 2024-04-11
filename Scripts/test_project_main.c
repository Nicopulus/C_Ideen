#include <stdio.h>

void my_function_file1(void);

void my_function_file2(void);

int main_private_data;//to avoid new definitions of this variable out of 'main.c' scope we can use
                      //'static int main_private_data;' as declaration.

int main(){
    main_private_data = 100;
    printf("main_private_data is: %d\n", main_private_data);
    
    my_function_file1();
    printf("main_private_data is: %d\n", main_private_data);

    my_function_file2();

    return 0;
}

void change_system_clock(int new_system_clock){
    printf("system clock changed to: %d\n", new_system_clock);
}