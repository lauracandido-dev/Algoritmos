#include <stdio.h>

int main(){
    int i = 5;

    do{
        printf("i++ = %d\n", i++);
        printf("++i = %d\n", ++i);
    } while (i<10);
}

// no caso de i++ ele imprime o valor inicial (5) e depois soma mais dois ao valor que foi printado
// já no segundo caso ele imprime o valor ja com a soma de 2 e continua a execução, ou seja já imprime o resultado