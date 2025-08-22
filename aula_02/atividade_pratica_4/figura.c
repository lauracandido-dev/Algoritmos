// criar funções para achar a area das figuras (quadrado, retangulo, circunferencia, trapezio, losango, triangulo). Comrçar com um menu para pedir qual fugura
// a pessoa quer criar, em seguida pedir os dados de cada função (quadrado pede o lado e calcula....)

#include "figura.h"
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846



float quadrado(float a){
    return a*a;
}

double retangulo(float a, float b){
    return a*b;
}

float circunferencia(float a){
    
    return M_PI * a * a; 
}

// A = π * r²


float trapezio(float a, float b, float c){
    return (a + b) * c / 2;
}
// A = ((B + b) * h) / 2,

float losango(float a, float b){
    return (a * b) / 2;
}

// Área = (D * d) / 2

float triangulo(float a, float b){
    return a * b / 2;
}

void menu(){
    printf("Digite um número para calcular a área da figura desejada: ");
    printf("1. Quadrado\n");
    printf("2. Retângulo\n");
    printf("3. Circunferência\n");
    printf("4. Trapézio\n");
    printf("5. Losango\n");
    printf("6. Triângulo\n");
}
