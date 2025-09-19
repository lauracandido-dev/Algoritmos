// Desenvolva um programa que:
// ▶ Crie uma matriz 5x5
// ▶ Preencha com o padrão: matriz[i][j] = i + j
// ▶ Exiba a matriz resultante

#include <stdio.h>
int main(){
    int i = 5;
    int j = 5;
    int matriz[5][5];

    printf("Digite os elementos da matriz 5x5:\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", matriz[i][j]);
        }
    }

    printf("\nMatriz 5x5:\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

}
