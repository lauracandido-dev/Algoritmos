#include <stdio.h>

int main() {
    int num;
    int soma = 0, contador = 0;
    double media;

    while (1) { // laço que só para ao digitar 0
        do {
            printf("Digite um numero entre 1 e 100 (ou 0 para sair): ");
            scanf("%d", &num);

            if (num == 0) break; // deixa o usuário sair
            if (num < 1 || num > 100) {
                printf("Numero invalido! Tente novamente.\n");
            }
        } while (num < 1 || num > 100);

        if (num == 0) break; // sai do while principal

        soma += num;
        contador++;
    }

    if (contador > 0) {
        media = (double)soma / contador;
        printf("\nVoce digitou %d numeros validos.\n", contador);
        printf("A media dos numeros validos é: %.2f\n", media);
    } else {
        printf("\nNenhum numero valido foi digitado.\n");
    }

    return 0;
}
