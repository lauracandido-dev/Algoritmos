#include <stdio.h>
#include "conversoes.h"

int main() {
    float x = 10.0;

    printf("%.2f °C em Fahrenheit é: %.2f °F\n", x, celsius_fahrenheit(x));
    printf("%.2f °F em Celsius é: %.2f °C\n", x, fahrenheit_celsius(x));

    printf("%.2f metros em km é: %.2f km\n", x, metros_km(x));
    printf("%.2f km em metros é: %.2f m\n", x, km_metros(x));

    printf("%.2f segundos em minutos é: %.2f min\n", x, seg_min(x));
    printf("%.2f minutos em segundos é: %.2f seg\n", x, min_seg(x));

    return 0;
}
