#include <stdio.h>

int main(){
    int tamanho = 10;
    int lista[tamanho];

    int soma = 0;

    for (int x = 0; x<tamanho;x++){
        printf("Digite o valor %d: ", x+1);
        scanf("%d", &lista[x]);
    } for (int x = 0; x < tamanho; x++){
        soma += lista[x];
        

    }
    printf("%d", soma);

    return 0;
}