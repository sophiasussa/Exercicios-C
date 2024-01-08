#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo para ler dois números inteiros e informar se estes
números são iguais ou diferentes.*/

int main(){

    int numero1, numero2;

    printf("Informe numero 1: ");
    scanf("%i", &numero1);

    printf("Informe numero 2: ");
    scanf("%i", &numero2);

    if(numero1 == numero2){
        printf("Numeros iguais");
    }else{
       printf("Numeros diferentes");
    }

    return 0;
}
