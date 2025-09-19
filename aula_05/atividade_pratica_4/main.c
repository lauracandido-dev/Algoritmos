#include <stdio.h>

int main() {
    int numeros[15];
    int pares, impares;
    char opcao;

    do {
        pares = 0;
        impares = 0;

        for (int i = 0; i < 15; i++) {
            printf("Digite o %dº numero inteiro: ", i + 1);
            scanf("%d", &numeros[i]);

            if (numeros[i] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }

        printf("\nQuantidade de pares: %d\n", pares);
        printf("Quantidade de impares: %d\n", impares);

        // Pergunta se deseja continuar
        printf("\nDeseja executar novamente? (s/n): ");
        scanf(" %c", &opcao); 

    } while (opcao == 's' || opcao == 'S');

    printf("\nPrograma encerrado.\n");
    return 0;
}
