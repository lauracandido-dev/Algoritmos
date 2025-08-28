#include <stdio.h>

int main(){
    int num;

    printf("Digite um número de 1 a 7 e escolha um dia da semana: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    
    default:
        printf("Número inválido\n");
        break;
    }
}