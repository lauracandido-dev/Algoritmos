#include <stdio.h>

int main() {
    int num1, num2, num3;
    int maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if ((num1 >= num2) && (num1 >= num3)) {
        maior = num1;
    } else if ((num2 >= num1) && (num2 >= num3)) {
        maior = num2;
    } else {
        maior = num3;
    }

    if ((num1 <= num2) && (num1 <= num3)) {
        menor = num1;
    } else if ((num2 <= num1) && (num2 <= num3)) {
        menor = num2;
    } else {
        menor = num3;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
