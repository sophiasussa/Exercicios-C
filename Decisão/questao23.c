#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fa�a um Programa para ler tr�s idades de alunos e seguir as seguintes
instru��es:
Se a m�dia de idade dos alunos � inferior de 25, apresentar a mensagem
"Turma Jovem";
Se a m�dia de idade dos alunos � entre 25 e 40, apresentar a mensagem
"Turma Adulta";
Se a m�dia de idade dos alunos � acima de 40 anos, apresentar a
mensagem "Turma Idosa".
*/

int main(){

    int id1, id2, id3;
    float media;

    printf("Informe 3 idades: \n");
    scanf("%d%d%d", &id1, &id2, &id3);

    media = (id1 + id2 + id3)/3;

    if(media < 25){
        printf("Turma Jovem/n");
    }else if(media >= 25 && media <=40){
        printf("Turma Adulta/n");
    }else{
        printf("Turma Idosa/n");
    }

    return 0;
}
