#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Um comerciante comprou um produto e quer vendê-lo com um lucro de
45% se o valor da compra for menor que R$ 20,00; caso contrário, o lucro
será de 30%. Elabore um algoritmo que leia o valor do produto e imprima
o valor de venda para o produto.*/

int main(){

    double prod_valor, venda = 0;

    printf("Informe o valor do produto: ");
    scanf("%lf", &prod_valor);

    if(prod_valor < 20){
        venda = prod_valor * 1.45;
        printf("O valor da venda eh: %.2lf", venda);
    } else{
        venda = prod_valor * 1.30;
        printf("O valor da venda eh: %.2lf", venda);
    }

    return 0;
}
