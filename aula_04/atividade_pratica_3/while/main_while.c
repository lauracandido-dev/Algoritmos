#include <stdio.h>

int main() {
    int N, soma = 0, i = 1;

    printf("Digite um numero N: ");
    scanf("%d", &N);

    while (i <= N) {
        soma += i;
        i++;
    }

    printf("A soma de 1 ate %d é %d\n", N, soma);

    return 0;
}
