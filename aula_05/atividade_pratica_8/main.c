// Implemente um programa que:
// ▶ Leia uma matriz 3x3
// ▶ Exiba apenas os elementos da diagonal principal
// ▶ Calcule e mostre a soma desses elementos

#include <stdio.h>

int main(){
    int matriz [3][3];
    int i, j;
    int soma = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDiagonal principal da matriz 3x3:\n");
    
    for (int i = 0; i < 3; i++) {   
        printf("%3d\n", matriz[i][i]);
    }
        printf("\n");
    
    for( i = 0; i < 3; i++ ) {
        soma += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", soma);
    return 0;
}
    
