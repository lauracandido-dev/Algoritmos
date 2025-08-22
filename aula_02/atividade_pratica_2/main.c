#include<stdio.h>
#include"numero.h"

int main(){
    int x = 3, y = 5;

    printf("%d é par? %s\n", x, par(x) ? "sim" : "não");
    printf("%d é par? %s\n", y, par(y) ? "sim" : "não");

    printf("%d é primo? %s\n", x, primo(x) ? "sim" : "não");
    printf("%d é primo? %s\n", y, primo(y) ? "sim" : "não");

    printf("Fatorial de %d é %d\n", x, fatorial(x));
    printf("Fatorial de %d é %d\n", y, fatorial(y));
    
    printf("Maior entre %d e %d é %d\n", x, y, maior(x, y));
    printf("%d elevado a %d é %d\n", x, y, potencia(x, y));

    return 0;

}