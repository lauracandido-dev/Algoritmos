#include <stdio.h>
#include "figura.h"

int main() {
    int opcao;
    float a, b;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o raio da circunferencia: ");
                scanf("%f", &a);
                printf("Area = %.2f\n", circunferencia(a));
                break;

            case 2:
                printf("Digite a base e a altura do triangulo: ");
                scanf("%f %f", &a, &b);
                printf("Area = %.2f\n", triangulo(a, b));
                break;

            case 3:
                printf("Digite a base e a altura do retangulo: ");
                scanf("%f %f", &a, &b);
                printf("Area = %.2f\n", retangulo(a, b));
                break;

            case 4:
                printf("Saindo.\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

        printf("\n"); 
    } while (opcao != 4); // com o while no fim fica repetindo até o usuário escolher o 4

    return 0;
}
