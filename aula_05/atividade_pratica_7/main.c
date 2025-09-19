#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma_linha;
    int soma_coluna;

    printf("Digite os elementos da matriz 4x4:\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 4x4:\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Soma das linhas
    for (int i = 0; i < 4; i++) {
        soma_linha = 0;  // Zera a soma para cada linha
        for (int j = 0; j < 4; j++) {
            soma_linha += matriz[i][j];  // Soma os elementos da linha
        }
        printf("Soma da linha %d: %d\n", i + 1, soma_linha);
    }

    // Soma das colunas
    for (int j = 0; j < 4; j++) {
        soma_coluna = 0;  // Zera a soma para cada coluna
        for (int i = 0; i < 4; i++) {
            soma_coluna += matriz[i][j];  // Soma os elementos da coluna
        }
        printf("Soma da coluna %d: %d\n", j + 1, soma_coluna);
    }

    return 0;
}
