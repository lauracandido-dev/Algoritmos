#include<stdio.h>
#include"conversoes.h"

float main(){
    float c;

    printf("Digite a temperatura em °C: \n");
    scanf("%f", &c);
    printf("A temperatura em F é: %f\n", c_f(c));
}