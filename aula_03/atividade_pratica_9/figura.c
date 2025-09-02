#include <stdio.h>
#include "figura.h"



int menu(a, b, c){
    int a, b, c;

    printf("Digite o valor do lado A, lado B e do lado C: ");
    scanf("%d", &a, &b, &c);
}

int eh_triangulo(a, b, c){
    if (a + b == c && b + c == a && a + c == b);
        printf("É triângulo de lados: ");
        scanf("%d", &a, &b, &c);
            if (a != b  && b != c && c != a){
                printf("E é um triângulo escaleno");
                scanf("%d %d %d", &a, &b, &c);
            } else if(a == b || b == c || c == a){
                printf("E é um triângulo isósceles");
                scanf("%d %d %d", &a, &b, &c);
            } else if(a == b && b == c && c == a){
                printf("E é um triângulo equilátero");
                scanf("%d %d %d", &a, &b, &c);
            }
    else{
        printf("Não é triângulo");
    }
    return 0;
}