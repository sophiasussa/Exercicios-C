#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. O programa
dever� informar se os valores podem ser um tri�ngulo. Indique, caso os
lados formem um tri�ngulo, se o mesmo �: equil�tero, is�sceles ou
escaleno.
Dicas:
Tr�s lados formam um tri�ngulo quando a soma de quaisquer dois lados
for maior que o terceiro;
Tri�ngulo Equil�tero: tr�s lados iguais; Tri�ngulo Is�sceles: quaisquer
dois lados iguais;
Tri�ngulo Escaleno: tr�s lados diferentes.
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
