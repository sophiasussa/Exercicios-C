#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um algoritmo para ler três números positivos e escrevê-los em
ordem crescente.*/

int main(){

    double a, b, c;

    printf("Informe 3 numeros!\n\n");
    printf("Informe o primeiro numero: ");
    scanf("%lf", &a);

    printf("Informe o segundo numero: ");
    scanf("%lf", &b);

    printf("Informe o terceiro numero: ");
    scanf("%lf", &c);

    if(a <= b && b <= c){
        printf("Numeros em ordem crescente: %lf, %lf, %lf", a, b, c);
    } else if (a <= c && b <= c){
        printf("Numeros em ordem crescente: %lf, %lf, %lf", a, c, b);
    } else if (b <= a && a <= c){
        printf("Numeros em ordem crescente: %lf, %lf, %lf", b, a, c);
    } else if (b <= c && c <= a){
        printf("Numeros em ordem crescente: %lf, %lf, %lf", b, c, a);
    } else if (c <= a && a <= b){
        printf("Numeros em ordem crescente: %lf, %lf, %lf", c, a, b);
    } else {
        printf("Numeros em ordem crescente: %lf, %lf, %lf", c, b, a);
    }

    return 0;
}
