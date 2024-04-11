#include <stdio.h>

int add_numbers(int, int, int);//optional definition

int main(){
    int ret_sum;
    ret_sum = add_numbers(4,3,6);

    printf("The summe is: %d\n", ret_sum);
    return 0;
}

int add_numbers(int a, int b, int c){
    int sum;    
    sum = a+b+c;
    return sum;
}
//https://www.onlinegdb.com/?dest_fid=