#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Fa�a um Programa para um caixa eletr�nico. O programa dever�
perguntar ao usu�rio a valor do saque e depois informar quantas notas
de cada valor ser�o fornecidas. As notas dispon�veis ser�o as de 1, 5, 10,
50 e 100 reais. O valor m�nimo � de 10 reais e o m�ximo de 600 reais. O
programa n�o deve se preocupar com a quantidade de notas existentes
na m�quina.
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas
notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece tr�s
notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e
quatro notas de 1.
*/

int main(){

    int saque, cen, dez, uni;

    printf("Informe o valor do saque (entre 10 e 600 reais): \n");
    scanf("%d", &saque);

    cen = (saque/100);
    dez = ((saque%100) - saque % 10) / 10;
    uni = saque % 10;

    printf("Para sacar a quantia de %d reais, o programa fornece", saque);
    if(saque >= 10 && saque <=600){
        if(cen == 1){
            printf(" %d nota de 100", cen);
        }else if(cen > 1){
            printf(" %d notas de 100", cen);
        }
        if(dez == 5){
            printf(", uma nota de 50");
        }else if(dez > 5){
            printf(", uma nota de 50");
            int aux =  dez - 5;
            if(aux == 1){
                printf(" e %d nota de 10", aux);
            }else{
                printf(" e %d notas de 10", aux);
            }
        }else if(dez != 0){
            if(dez == 1){
                printf(", %d nota de 10", dez);
            }else{
                printf(", %d notas de 10", dez);
            }
        }
        if(uni == 5){
            printf(", uma nota de 5");
        } else if(uni > 5){
            printf(", uma nota de 5");
            int aux =  uni - 5;
            if(aux == 1){
                printf(" e %d nota de 1", aux);
            }else{
                printf(" e %d notas de 1", aux);
            }
        }else if(uni != 0){
            if(uni == 1){
                printf(" e %d nota de 1", uni);
            }else{
                printf(" e %d notas de 1", uni);
            }
        }
    }else{
        return 1;
    }

    return 0;
}
