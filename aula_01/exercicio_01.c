#include<stdio.h>
#include<math.h>

int main(){
    float nf, lab, lab1, lab2, lab3, pj, pv; 

    printf("Digite a nota do laboratório 01: ");
    scanf("%f", &lab1);
    
    printf("Digite a nota do laboratório 02: ");
    scanf("%f", &lab2);

    printf("Digite a nota do laboratório 03: ");
    scanf("%f", &lab3);

    printf("Digite a nota do projeto: ");
    scanf("%f", &pj);

    printf("Digite a nota da prova: ");
    scanf("%f", &pv);

    lab = (lab1 + lab2 + lab3) / 3;

    nf = (0.2 * lab) + (0.8 * sqrt(pj * pv));

    printf("A sua nota final foi %.1f\n", nf);

    return 0;
}



// gcc aula_01/exercicio_01.c
// ./a.out