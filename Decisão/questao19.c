#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que lê as duas notas parciais obtidas por um aluno
numa disciplina ao longo de um semestre, e calcule a sua média. A
atribuição de conceitos obedece à tabela abaixo:
Média de Aproveitamento Conceito
Entre 9.0 e 10.0 A
Entre 7.5 e 9.0 B
Entre 6.0 e 7.5 C
Entre 4.0 e 6.0 D
Entre 4.0 e zero E
O algoritmo deve mostrar na tela as notas, a média, o conceito
correspondente e a mensagem “APROVADO” se o conceito for A, B ou C
ou “REPROVADO” se o conceito for D ou E.
*/

int main(){

    double nota1, nota2, media = 0;

    printf("Informe a primeira nota: \n");
    scanf("%lf", &nota1);

    printf("Informe a segunda nota: \n");
    scanf("%lf", &nota2);

    media = (nota1 + nota2)/ 2;
    char conceito;

    if(media >= 9.0 && media <=10.0){
       conceito = 'A';
    } else if(media >= 7.5 && media < 9.0){
       conceito = 'B';
    } else if(media >= 6.0 && media < 7.5){
       conceito = 'C';
    } else if(media >= 4.0 && media < 6.0){
       conceito = 'D';
    } else if(media >= 0 && media < 4.0){
       conceito = 'E';
    } else {
        printf("Media Invalida!");
        return 1;
    }

    printf("----Notas----\n");
    printf("Primeira nota: %.2lf\n", nota1);
    printf("Segunda nota: %.2lf\n", nota2);
    printf("Media: %.2lf\n", media);
    printf("Conceito: %c\n", conceito);

    switch (conceito)
    {
    case 'A':
    case 'B':
    case 'C':
        printf("APROVADO!");
        break;
    case 'D':
    case 'E':
        printf("REPROVADO");
        break;
    default:
        break;
    }

    return 0;
}
