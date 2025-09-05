#include <stdio.h>

int f_iter(int n){
    int x = 0;
    if (n == 1){
        return x;
    }
    int y = 1;

    if (n == 2){
        return y;
    }
    int aux;
    for (int i = 0; i < n - 2; i++){
        aux = y;
        y = y+x;
        x = aux;

    }
    return y;
}

int f_rec(int n){
    if(n == 1 || n == 2){
        return n - 1;
    }
    return f_rec(n - 1 )+ f_rec(n - 2);
}

int main(){
    // printf("iterativa: %d \n", f_iter(40));
    printf("recursiva: %d\n", f_rec(40));

    return 0;
}

// // Função recursiva
// long long fibonacci_recursivo(int n) { // long long é para inteiro maiores (64 bits)
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
// }

// // Função iterativa
// long long fibonacci_iterativo(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;

//     long long a = 0, b = 1, c;
//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// // entrada do programa
// int main() {
//     int n = 10;

//     printf("Fibonacci recursivo(%d) = %lld\n", n, fibonacci_recursivo(n));
//     printf("Fibonacci iterativo(%d) = %lld\n", n, fibonacci_iterativo(n));

//     return 0;
// }
