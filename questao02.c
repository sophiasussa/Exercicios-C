#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo para ler um n�mero inteiro e informar se o n�mero �
par ou �mpar.*/

int main(){

    int numero;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    if(numero%2 == 0){
        printf("Numero par");
    }else{
       printf("Numero impar");
    }

    return 0;
}
