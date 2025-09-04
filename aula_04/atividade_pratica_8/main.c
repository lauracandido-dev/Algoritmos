#include <stdio.h>

int main() {
    int n;
    printf("Digite quantas linhas você quer que tenha o triângulo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { //ve a quantidade de linhas
        for (int j = 1; j <= i; j++) {
            printf("*"); //imprime os *
        }
        printf("\n");
    }

    return 0;
}
