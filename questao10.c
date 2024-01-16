#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Elabore um algoritmo que indique se um número digitado está
compreendido no intervalo de [20 a 90] inclusive, ou não.*/

int main(){

    double a;

    printf("Informe o numero: ");
    scanf("%lf", &a);

    if(a >= 20 && a <= 90){
        printf("O numero: %.2lf esta entre 20 e 90", a);
    } else{
        printf("O numero: %.2lf nao esta entre 20 e 90", a);
    }

    return 0;
}
