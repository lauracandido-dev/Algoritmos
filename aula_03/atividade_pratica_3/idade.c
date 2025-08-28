// Desenvolva um programa que leia a idade de uma pessoa e
// use o operador ternário para determinar se ela é maior de
// idade (>= 18 anos). O programa deve armazenar o
// resultado em uma variável e depois exibir uma mensagem
// apropriada.

#include<stdio.h>


int idade(int num1){
    if (num1 >= 18)
        printf("É maior de idade");
    else{
        printf("Não é maior de idade\n");
    }
}