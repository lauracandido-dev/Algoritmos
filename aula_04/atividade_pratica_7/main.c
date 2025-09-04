#include <stdio.h>

// Função recursiva
long long fibonacci_recursivo(int n) { // long long é para inteiro maiores (64 bits)
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}

// Função iterativa
long long fibonacci_iterativo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Ponto de entrada do programa
int main() {
    int n = 10;

    printf("Fibonacci recursivo(%d) = %lld\n", n, fibonacci_recursivo(n));
    printf("Fibonacci iterativo(%d) = %lld\n", n, fibonacci_iterativo(n));

    return 0;
}
