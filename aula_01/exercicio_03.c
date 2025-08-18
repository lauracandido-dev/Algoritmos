#include<stdio.h>

int main(){
    int diaAtual, mesAtual, anoAtual, diaProd, mesProd, anoProd;

    printf("Digite o ano atual: ");
    scanf("%i", &anoAtual);

    printf("Digite o ano de vencimendo do produto: ");
    scanf("%i", &anoProd);

    if (anoAtual>anoProd){
        printf("O produto está vencido \n");
    }
    else{
        printf("O produto está dentro da validade \n");
    }
    


    return 0;
}

// gcc aula_01/exercicio_01.c
// ./a.out

// git add .
// git commit -m "Descrição tal"
// git push