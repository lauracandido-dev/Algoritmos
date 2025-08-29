// #include <stdio.h>

// int main() {
//     char usuario;  
//     int senha;    

//     printf("Digite o usuario: ");
//     scanf("%c", &usuario);

//     printf("Digite a senha: ");
//     scanf("%d", &senha);

//     if ((usuario == "admin") && (senha == 12345)) {
//         printf("Login realizado com sucesso!\n");
//     } 
//     else if ((usuario != "admin") && (senha != 12345)) {
//         printf("Erro: usuario e senha incorretos!\n");
//     } 
//     else if (usuario != "admin") {
//         printf("Erro: usuario incorreto!\n");
//     } 
//     else if (senha != 12345) {
//         printf("Erro: senha incorreta!\n");
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h> //  precisa incluir para strcmp

int main() {
    char login[20];
    char senha[20];

    printf("Digite o usuario: ");
    scanf("%s", login);

    printf("Digite a senha: ");
    scanf("%s", senha);

    if ((strcmp(login, "admin") == 0) && (strcmp(senha, "12345") == 0)) {
        printf("Login realizado com sucesso!\n"); // o strcmp pode colocar palavras e não só uma letra ou número
    } 
    else if ((strcmp(login, "admin") != 0) && (strcmp(senha, "12345") != 0)) {
        printf("Erro: usuario e senha incorretos!\n");
    } 
    else if (strcmp(login, "admin") != 0) {
        printf("Erro: usuario incorreto!\n");
    } 
    else if (strcmp(senha, "12345") != 0) {
        printf("Erro: senha incorreta!\n");
    }

    return 0;
}

