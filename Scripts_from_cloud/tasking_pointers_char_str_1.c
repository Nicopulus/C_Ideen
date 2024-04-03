#include<stdio.h>
#include<string.h>

//Al tener un puntero de un array como argumento de una funcion, 
//se puede utilizar este elemento dentro de la funcion como si 
//estuviera ya definido en el scope de la funcion

void print_0(char* C){
    int i = 0;
    while(C[i]!= '\0'){
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}
void print_1(char* C){
    while(*C != '\0'){
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main(){
    char C[20] = "Hello";
    print_0(C);
    print_1(C);
}
//https://youtu.be/zuegQmMdy8M?t=5584