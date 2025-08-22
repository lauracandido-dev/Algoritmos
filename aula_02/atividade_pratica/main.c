#include <stdio.h>
#include "calculadora.h"

int main (){
    float a = 20.0, b = 30.0;

    printf("a = %.2f,b = %.2f\n", a, b);
    printf("Soma: %.2f\n", somar (a,b));
    printf("Subtração: %.2f\n", subtrair(a,b));
    printf("Multiplicação: %.2f\n", multiplicar(a,b));

    if (eh_divisao_valida(b)){
        printf("Divisão: %.2f\n", dividir (a,b));
    }   else{
        printf("Erro: Divisão por zero\n");
    }
}

// cd exemplo_02 - entra na pasta
// dentro da pasta gcc *.c
// ./a.out