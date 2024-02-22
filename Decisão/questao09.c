#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* O sistema de gerenciamento acad�mico do Instituto Federal de Goi�s �
C�mpus Jata� segue algumas normas quanto � aprova��o de um(a)
determinado(a) aluno(a). Fa�a um algoritmo para ler o nome, as quatro
notas e o n�mero de faltas de um aluno e escrever qual a sua situa��o
final: Aprovado, Reprovado por Falta ou Reprovado por M�dia. A m�dia
para aprova��o � 6,0 e o limite de faltas � 25% do total de aulas. O
n�mero de aulas ministradas no semestre foi de 72. A reprova��o por
falta sobrep�e a reprova��o por M�dia*/

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
