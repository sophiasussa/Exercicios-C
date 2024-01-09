#include <stdio.h>
#include <string.h>

/*Elabore um algoritmo para testar se uma senha digitada é igual a
“eh4nois”. Se a senha estiver correta escreva “Acesso permitido”, caso
contrário emita a mensagem “Você não tem acesso ao sistema”*/

int main() {
    char senha[50];
    char senhaReal[] = "eh4nois";

    printf("Informe a senha: ");
    fgets(senha, sizeof(senha), stdin);

    senha[strcspn(senha, "\n")] = '\0';

    printf("Senha digitada: '%s'\n", senha);
    printf("Senha real: '%s'\n", senhaReal);

    int resultado = strcmp(senha, senhaReal);

    if (resultado == 0) {
        printf("Acesso Permitido\n");
    } else {
        printf("Voce nao tem acesso ao sistema\n");
    }

    return 0;
}
