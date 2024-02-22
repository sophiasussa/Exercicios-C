#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo para ler tr�s valores reais e informar se estes podem
ou n�o formar os lados de um tri�ngulo e qual tipo de tri�ngulo seria:
equil�tero, is�sceles ou escaleno*/

int main() {
    double a, b, c;

    printf("Informe os lados do triangulo\n\n");

    printf("Informe a: ");
    scanf("%lf", &a);

    printf("Informe b: ");
    scanf("%lf", &b);

    printf("Informe c: ");
    scanf("%lf", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero. Todos os lados sao iguais: %.2lf, %.2lf, %.2lf\n", a, b, c);
        } else if (a != b && c != b) {
            printf("Triangulo Escaleno. Todos os lados sao diferentes: %.2lf, %.2lf, %.2lf\n", a, b, c);
        } else {
            printf("Triangulo Isosceles. Dois lados possuem a mesma medida: %.2lf, %.2lf, %.2lf\n", a, b, c);
        }
    } else {
        printf("Nao eh possivel fazer um triangulo com os valores: %.2lf, %.2lf, %.2lf\n", a, b, c);
    }

    return 0;
}
