#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um Programa para ler três idades de alunos e seguir as seguintes
instruções:
Se a média de idade dos alunos é inferior de 25, apresentar a mensagem
"Turma Jovem";
Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem
"Turma Adulta";
Se a média de idade dos alunos é acima de 40 anos, apresentar a
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
