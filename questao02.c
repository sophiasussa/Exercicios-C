#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo para ler um número inteiro e informar se o número é
par ou ímpar.*/

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
