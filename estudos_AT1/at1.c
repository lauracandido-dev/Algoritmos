// Escreva um programa que leia dois números inteiros e
// determine qual é o maior usando apenas operadores de
// comparação. Se os números forem iguais, exiba uma
// mensagem apropriada.

#include<stdio.h>

int num1, num2;
int main(){
    printf("Digite dois numeros inteiros: \n");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2){
        printf("O número %d é maior\n", num1);
    } if(num2 > num1){
        printf("O número %d é maior\n", num2);
    } else{
        printf("Os números são iguais\n");
    }
}