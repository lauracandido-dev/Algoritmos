// criar funções para achar a area das figuras (quadrado, retangulo, circunferencia, trapezio, losango, triangulo). Comrçar com um menu para pedir qual fugura
// a pessoa quer criar, em seguida pedir os dados de cada função (quadrado pede o lado e calcula....)

#include<stdio.h>
#include"figura.h"

int main(){
    int opcao;
    float a, b, c;

    menu();
    scanf("%d", &opcao);
    if (opcao == 1){
        printf("Digite o lado do quadrado: ");
        scanf("%f", &a);
        printf("Área = %f\n", quadrado(a));
    }

    else if (opcao == 2){
        printf("Digite a base e a altura do retângulo: ");
        scanf("%f %f", &a, &b);
        printf("Área = %f\n", retangulo(a,b));
    }

    else if(opcao == 3){
        printf("Digite o raio da circunferência: ");
        scanf("%f", &a);
        printf("Área = %.2f\n", circunferencia(a));
    }
    
    else if(opcao == 4){
        printf("Digite a base maior, base menor e a altura do trapézio: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("Área = %.2f\n", trapezio(a,b,c));
    }

    else if(opcao == 5){
        printf("Digite a diagonal maior e a diagonal menor do losango: ");
        scanf("%f %f", &a, &b);
        printf("Área = %.2f\n", losango(a, b));
    }

    else if(opcao == 6){
        printf("Digite a base e a altura do triângulo: ");
        scanf("%f %f", &a, &b);
        printf("Área = %.2f\n", triangulo(a,b));
    }
}