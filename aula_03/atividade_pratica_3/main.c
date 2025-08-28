#include <stdio.h>
#include "idade.h"

int main() {
    int num1;

    printf("Digite a sua idade: ");
    scanf("%d", &num1);

    idade(num1);  // chama a função

    return 0;
}
