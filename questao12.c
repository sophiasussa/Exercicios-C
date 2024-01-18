#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  Faça um algoritmo para ler um salário e atualizá-lo de acordo com a
tabela abaixo.*/

int main(){

    double salario, atualizado = 0;

    printf("Informe o valor do salario: ");
    scanf("%lf", &salario);

    if(salario <= 600){
        atualizado = salario * 1.30;
        printf("O valor do salario atualizado eh: %.2lf", atualizado);
    } else if (salario > 600 && salario <= 1100){
        atualizado = salario * 1.25;
        printf("O valor do salario atualizado eh: %.2lf", atualizado);
    } else if (salario > 1100 && salario <= 2400){
        atualizado = salario * 1.20;
        printf("O valor do salario atualizado eh: %.2lf", atualizado);
    } else if (salario > 2400 && salario <= 3550){
        atualizado = salario * 1.15;
        printf("O valor do salario atualizado eh: %.2lf", atualizado);
    } else if (salario > 3550){
        atualizado = salario * 1.10;
        printf("O valor do salario atualizado eh: %.2lf", atualizado);
    }

    return 0;
}
