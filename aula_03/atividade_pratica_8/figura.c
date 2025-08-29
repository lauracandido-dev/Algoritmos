#include "figura.h"
#include <stdio.h>
#define M_PI 3.14159265358979323846

float circunferencia(float a) {
    return M_PI * a * a;
}

float triangulo(float a, float b) {
    return (a * b) / 2;
}

float retangulo(float a, float b) {
    return a * b;
}

void menu() {
    printf("Digite um numero para calcular a area da figura desejada:\n");
    printf("1. Circunferencia\n");
    printf("2. Triangulo\n");
    printf("3. Retangulo\n");
    printf("4. Sair\n");
}
