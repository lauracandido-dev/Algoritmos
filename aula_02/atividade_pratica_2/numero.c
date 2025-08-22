#include"numero.h"

int par(int n){
    return n % 2 == 0;
}

int primo(int n){
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int fatorial(int n){
    if (n < 0) return -1; // não definido para negativos
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}


// Crie uma biblioteca de funções para operações com números
// inteiros. Implemente funções para verificar se um número
// é par, primo, calcular fatorial, encontrar o maior entre
// dois números e calcular potência. Organize o código nos
// arquivos numeros.h, numeros.c e main.c.

// cd exemplo_02 - entra na pasta
// dentro da pasta gcc *.c
// ./a.out
// cd .. - volta uma pasta