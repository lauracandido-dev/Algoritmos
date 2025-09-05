#include <stdio.h>
// função recursiva
int base;
int expoente;
int resultado;

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    else {
        return (base * potencia(base, expoente - 1));
    }
}


// função iterativa 

// int potencia_iterativa(int base, int expoente){
//     for (int i = 0; i < expoente; i++){
//         resultado *= base;
//     }
// }


int main() {
    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente); 

    printf("%d elevado a %d = %d\n", base, expoente, resultado);

    return 0;
}
