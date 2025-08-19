#include <stdio.h>

int main() {
    int i;
    int codigo, idade;
    char genero, experiencia, ingles;


    int cod_homem_mais_velho_sem_exp = -1;
    int idade_homem_mais_velho_sem_exp = -1;

    int total_ingles_exp = 0;

    int cod_fem_outro_mais_jovem = -1;
    int idade_fem_outro_mais_jovem = 9999;

    for (i = 1; i <= 10; i++) {
        printf("Candidato %d \n", i);

        printf("Digite o codigo: ");
        scanf("%d", &codigo);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o genero (F/M/O): ");
        scanf(" %c", &genero);

        printf("Possui experiencia? (S/N): ");
        scanf(" %c", &experiencia);

        printf("Fala ingles fluente? (S/N): ");
        scanf(" %c", &ingles);

        if (genero == 'M' || genero == 'm') {
            if ((experiencia == 'N' || experiencia == 'n') && idade > idade_homem_mais_velho_sem_exp) {
                idade_homem_mais_velho_sem_exp = idade;
                cod_homem_mais_velho_sem_exp = codigo;
            }
        }


        if ((ingles == 'S' || ingles == 's') && (experiencia == 'S' || experiencia == 's')) {
            total_ingles_exp++;
        }


        if (genero == 'F' || genero == 'f' || genero == 'O' || genero == 'o') {
            if (idade < idade_fem_outro_mais_jovem) {
                idade_fem_outro_mais_jovem = idade;
                cod_fem_outro_mais_jovem = codigo;
            }
        }
    }

    printf("RESULTADOS\n");

    // a)
    if (cod_homem_mais_velho_sem_exp != -1) {
        printf("a) Codigo do homem mais velho sem experiencia: %d\n", cod_homem_mais_velho_sem_exp);
    } else {
        printf("a) Nao houve homem sem experiencia.\n");
    }

    // b)
    printf("b) Total de pessoas que falam ingles e possuem experiencia: %d\n", total_ingles_exp);

    // c)
    if (cod_fem_outro_mais_jovem != -1) {
        printf("c) Codigo da mulher ou outro mais jovem: %d\n", cod_fem_outro_mais_jovem);
    } else {
        printf("c) Nao houve candidatas femininas ou de genero outro.\n");
    }

    return 0;
}



// git add .
// git commit -m "Descrição tal"
// git push