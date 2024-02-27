#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um Programa que leia um número inteiro menor que 1000 e imprima
a quantidade de centenas, dezenas e unidades do mesmo. Observe os
termos no plural a colocação do "e", da vírgula entre outros.
Exemplo:
326 = 3 centenas, 2 dezenas e 6 unidades
*/

int main(){

    int nume, cen, dez, uni;

    printf("Informe um numero menor que 1000: \n");
    scanf("%d", &nume);

    cen = nume / 100;
    dez = (nume % 100) / 10;
    uni = nume % 10;

    if(nume < 1000){
        if(cen > 1){
            printf("%d = %d centenas, ", nume, cen);
        }else{
            printf("%d = %d centena, ", nume, cen);
        }

        if (dez > 1){
            printf("%d dezenas e ",dez);
        }else{
            printf("%d dezena e ",dez);
        }

        if (uni > 1){
            printf("%d unidades",uni);
        }else{
            printf("%d unidade",uni);
        }

    }else{
        printf("Valor invalido!\n");
        return 1;
    }

    return 0;
}
