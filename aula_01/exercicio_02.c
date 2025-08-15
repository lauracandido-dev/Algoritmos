#include<stdio.h>


int main(){
    int hora, min, seg, tempoFalta, tempoPassado, meia_noite_seg;

    printf("Digite a hora atual: ");
    scanf("%i", &hora);

    printf("Digite o minuto atual: ");
    scanf("%i", &min);

    printf("Digite o segundo atual: ");
    scanf("%i", &seg);

    printf("São %.i horas, %.i minutos e %.i segundos. \n", hora, min, seg);

    tempoPassado = seg + (min*60) + (hora*60*60);
    meia_noite_seg = 24*60*60;
    tempoFalta = meia_noite_seg - tempoPassado;

    printf("Se passaram %.i segundos e faltam %.i segundo para a meia noite. \n", tempoPassado, tempoFalta);



    return 0;
}


// gcc aula_01/exercicio_01.c
// ./a.out

// git add .
// git commit -m "Descrição tal"
// git push