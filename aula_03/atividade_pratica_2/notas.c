// Crie um programa que leia três notas de um aluno e
// calcule a média. Use estruturas condicionais if-else
// para determinar se o aluno foi aprovado (média >= 7.0),
// ficou em recuperação (média >= 5.0 e < 7.0) ou foi
// reprovado (média < 5.0).


#include<stdio.h>


float media(float num1, float num2, float num3){

    float media = (num1 + num2 + num3)/3;

    if (media >= 7){
        printf("O aluno foi aprovado\n");
        return media;
    }
    else if (media >= 5 && media < 7){
        printf("O aluno ficou de recuperação\n");
        return media;
    }
    else if (media < 5){
        printf("O aluno reprovou\n");
        return media;
    }
}