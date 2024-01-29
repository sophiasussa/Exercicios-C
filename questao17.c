#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que pergunte o preço de três produtos e informe qual
produto você deve comprar, sabendo que a decisão é sempre pelo mais
barato.
*/

int main(){

    double valor1, valor2, valor3;

    printf("Informe o valor do primeiro produto: \n");
    scanf("%lf", &valor1);

    printf("Informe o valor do segundo produto: \n");
    scanf("%lf", &valor2);

    printf("Informe o valor do terceiro produto: \n");
    scanf("%lf", &valor3);

    if(valor1 < valor2 && valor1 < valor3){
        printf("O produto mais barato eh o primeiro, pelo valor de: %.2lf", valor1);
    } else if(valor2 < valor1 && valor2 < valor3){
        printf("O produto mais barato eh o segundo, pelo valor de: %.2lf", valor2);
    } else if(valor3 < valor1 && valor3 < valor2){
        printf("O produto mais barato eh o terceiro, pelo valor de: %.2lf", valor3);
    } else{
        printf("Produtos com valores iguais");
    }

    return 0;
}
