#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* O sistema de gerenciamento acadêmico do Instituto Federal de Goiás –
Câmpus Jataí segue algumas normas quanto à aprovação de um(a)
determinado(a) aluno(a). Faça um algoritmo para ler o nome, as quatro
notas e o número de faltas de um aluno e escrever qual a sua situação
final: Aprovado, Reprovado por Falta ou Reprovado por Média. A média
para aprovação é 6,0 e o limite de faltas é 25% do total de aulas. O
número de aulas ministradas no semestre foi de 72. A reprovação por
falta sobrepõe a reprovação por Média*/

int main(){

    char nome[30];
    double a, b, c, d, resultadome, presencas;
    int f, aula = 72;

    printf("Informe o nome do aluno: ");
    scanf("%s", &nome);

    printf("Informe a nota 1: ");
    scanf("%lf", &a);

    printf("Informe a nota 2: ");
    scanf("%lf", &b);

    printf("Informe a nota 3: ");
    scanf("%lf", &c);

    printf("Informe a nota 4: ");
    scanf("%lf", &d);

    printf("Informe o numero de faltas: ");
    scanf("%d", &f);

    resultadome = (a + b + c + d)/4;
    presencas =  aula - f;

    if(resultadome >= 6.0 && f <= 0.25*aula){
        printf("Aprovado %s! Resultado da Media: %.2lf, Presencas: %.2lf de %d aulas, faltas: %d", nome, resultadome, presencas, aula, f);
    } else if (resultadome < 6.0 && f <= 0.25*aula){
        printf("Reprovado por media %s! Resultado da Media: %.2lf, Presencas: %.2lf de %d aulas, faltas: %d", nome, resultadome, presencas, aula, f);
    } else{
        printf("Reprovado por falta %s! Resultado da Media: %.2lf, Presencas: %.2lf de %d aulas, faltas: %d", nome, resultadome, presencas, aula, f);
    }

    return 0;
}
