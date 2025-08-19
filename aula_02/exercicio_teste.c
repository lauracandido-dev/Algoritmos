#include<stdio.h>


int soma(int num1, int num2){

    return num1 + num2;
} 
// criar a função soma e outra função para executa-la


int main(){
    int res = soma(3, 8);
    printf("A soma é %d\n", res);

    return 0;
}


// int soma(int, int);

// int main(){
//     int res = soma(3, 8);
//     printf("A soma é %d\n", res);

//     return 0;
// }


// int soma(int num1, int num2){

//     return num1 + num2;
// } 

// Essa segunda opção também pode ser feita, pois uma função deve ser declarada antes de ser usada e você deve declarar fora da função que ira executar

