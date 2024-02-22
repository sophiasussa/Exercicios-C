#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fa�a um Programa que pe�a para entrar com um ano com 4 d�gitos e
determine se o mesmo � ou n�o bissexto. Use essa regra simples: Tente
dividir o ano por 4. Se o resto for diferente de 0, ou seja, se for indivis�vel
por 4, ele n�o � bissexto. Se for divis�vel por 4, � preciso verificar se o
ano acaba em 00 (zero duplo). Em caso negativo, o ano � bissexto. Se
terminar em 00, � preciso verificar se � divis�vel por 400. Se sim, �
bissexto; se n�o, � um ano normal.
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
