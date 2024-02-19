#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um Programa que peça os 3 lados de um triângulo. O programa
deverá informar se os valores podem ser um triângulo. Indique, caso os
lados formem um triângulo, se o mesmo é: equilátero, isósceles ou
escaleno.
Dicas:
Três lados formam um triângulo quando a soma de quaisquer dois lados
for maior que o terceiro;
Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer
dois lados iguais;
Triângulo Escaleno: três lados diferentes.
*/

int main(){

    int l1, l2, l3, triangulo, lm1,lm2,lm3;

    printf("Informe o tamanho de um lado: \n");
    scanf("%d", &l1);

    printf("Informe o tamanho do segundo lado: \n");
    scanf("%d", &l2);

    printf("Informe o tamanho do terceiro lado: \n");
    scanf("%d", &l3);

    if(((l1 + l2)> l3) && ((l1+l3)> l2) && ((l3+l2)>l1)){
        printf("Os valores podem formar um triangulo!\n");
        if(l1 == l2 && l2 == l3){
            printf("O triangulo eh equilatero! Com todos os lados iguais: %d, %d, %d", l1,l2,l3);
        } else if(l1 != l2 && l2 != l3){
            printf("O triangulo eh escaleno! Com todos os lados diferentes: %d, %d, %d", l1,l2,l3);
        } else{
            printf("O triangulo eh isosceles! Com dois lados iguais: %d, %d, %d", l1,l2,l3 );
        }
    }else{
        printf("Nao eh possivel formar um triangulo com os valores informados: %d, %d, %d\n", l1,l2,l3);
    }

    return 0;
}
