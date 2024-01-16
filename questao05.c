#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um algoritmo para ler os coeficientes de uma equação do segundo
grau e calcular as suas raízes, na forma Ax² + Bx + C, levando em
consideração a existência de raízes reais (∆ > 0, a equação possui duas
raízes reais e distintas; ∆ = 0, a equação possui raízes reais iguais; ∆ < 0,
a equação não possui raízes reais)*/

int main(){

    double x1,x2, a, b, c, d;

    printf("Informe a: ");
    scanf("%lf", &a);

    printf("Informe b: ");
    scanf("%lf", &b);

    printf("Informe c: ");
    scanf("%lf", &c);

    d = (b*b) - (4 *a * c);

    if(d > 0){
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Raizes: %lf, %lf", x1, x2);
    } else if (d = 0){
        x1 = -b/(2*a);
        x2 = -b/(2*a);
        printf("Raizes iguais: %lf, %lf", x1, x2);
    } else{
        printf("A equação não possui raízes reais");
    }

    return 0;
}
