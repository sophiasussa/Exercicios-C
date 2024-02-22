#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um Programa que peça para entrar com um ano com 4 dígitos e
determine se o mesmo é ou não bissexto. Use essa regra simples: Tente
dividir o ano por 4. Se o resto for diferente de 0, ou seja, se for indivisível
por 4, ele não é bissexto. Se for divisível por 4, é preciso verificar se o
ano acaba em 00 (zero duplo). Em caso negativo, o ano é bissexto. Se
terminar em 00, é preciso verificar se é divisível por 400. Se sim, é
bissexto; se não, é um ano normal.
*/

int main(){

    int ano;

    printf("Informe um ano de 4 digitos: ");
    scanf("%d", &ano);

    if (ano >= 1000 && ano <= 9999) {
        if(ano % 4 == 0 && ano % 100 != 0){
            printf("O ano eh bissexto: %d", ano);
        } else if (ano % 400 == 0){
            printf("O ano eh bissexto: %d", ano);
        } else {
            printf("O ano nao eh bissexto: %d", ano);
        }
    } else {
        printf("Insira um numero com 4 digitos, por favor!");
    }

    return 0;
}
