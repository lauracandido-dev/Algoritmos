#include <stdio.h>

void lerNumeros(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void encontrarMaior(int vetor[], int tamanho, int *maior, int *pos) {
    *maior = vetor[0];
    *pos = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
            *pos = i;
        }
    }
}

void encontrarMenor(int vetor[], int tamanho, int *menor, int *pos) {
    *menor = vetor[0];
    *pos = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            *menor = vetor[i];
            *pos = i;
        }
    }
}

int main() {
    int tamanho = 8;
    int numeros[8];
    int maior, posMaior, menor, posMenor;

    lerNumeros(numeros, tamanho);

    encontrarMaior(numeros, tamanho, &maior, &posMaior);
    encontrarMenor(numeros, tamanho, &menor, &posMenor);

    printf("\nMaior valor: %d na posicao %d\n", maior, posMaior + 1);
    printf("Menor valor: %d na posicao %d\n", menor, posMenor + 1);

    return 0;
}
