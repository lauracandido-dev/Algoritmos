#include<stdio.h>

#include"funcoes.h"  //na pasta exemplo dois, por isso ""

int main(){
    printf("%d\n", soma(2,5));  //reconhece soma pois importou nas funcoes.h
    printf("%.2f\n", soma_f(2.1,5.7));
    printf("%d\n", sub(8,5));
    return 0;
}



// cd exemplo_02 - entra na pasta
// dentro da pasta gcc *.c
// ./a.out