#include <stdio.h>

int main() {
    int numeros[10];
    int busca, encontrado = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite um numero para buscar: ");
    scanf("%d", &busca);

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == busca) {
            printf("\nNumero %d encontrado na posicao %d\n", busca, i + 1);
            encontrado = 1;
            break; 
        }
    }

    if (!encontrado) {
        printf("\nNumero %d nao foi encontrado no array.\n", busca);
    }

    return 0;
}
