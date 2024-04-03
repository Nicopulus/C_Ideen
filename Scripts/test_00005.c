#include <stdio.h>

int main(){
    long nc;
    nc = 0;

    while (getchar() != EOF){
        ++nc;
    }
    printf("%ld \n", nc);

}

//mit diem Kode kann man Zeichen zahlen.
//Seite 18 im Buch The_C_Programming_Language (32 in Adobe).