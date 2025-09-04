#include <stdio.h>

int main() {
    int opcao, numero;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Calcular quadrado de um numero\n");
        printf("2 - Calcular cubo de um numero\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcão: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                printf("O quadrado de %d é %d\n", numero, numero * numero);
                break;

            case 2:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                printf("O cubo de %d é %d\n", numero, numero * numero * numero);
                break;

            case 3:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
