#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um numero N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma de 1 ate %d é %d\n", N, soma);

    return 0;
}
