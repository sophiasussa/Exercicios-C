#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Fa�a um Programa que pe�a uma data no formato dia/m�s/ano e
determine se a mesma � uma data v�lida
*/

int main(){

    int dia, mes, ano;

    printf("Informe a data no formato dia/mes/ano: \n");
    scanf("%d%d%d", &dia, &mes, &ano);

    int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

    if(ano > 0){
        printf("Ano valido\n");
        if(mes > 0 && mes <=12){
            printf("Mes valido \n");
            if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                if(dia  > 0 && dia <=31){
                    printf("Data valida \n");
                    printf("A data %d/%d/%d eh uma data valida.\n", dia, mes, ano);
                }else{
                    printf("Data invalida \n");
                }
            }else if(mes == 2){
                if(bissexto){
                    if(dia > 0 && dia <= 29){
                        printf("Data valida\n");
                        printf("A data %d/%d/%d eh uma data valida.\n", dia, mes, ano);
                    } else{
                        printf("Data invalida");
                    }
                }else if (dia > 0 && dia <= 28){
                    printf("Data valida\n");
                    printf("A data %d/%d/%d eh uma data valida.\n", dia, mes, ano);
                } else{
                    printf("Data invalida");
                }
            } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                if(dia > 0 && dia <=30){
                    printf("Data valida \n");
                    printf("A data %d/%d/%d eh uma data valida.\n", dia, mes, ano);
                } else{
                    printf("Data invalida \n");
                }
            }
        } else{
            printf("Mes invalido");
        }
    }else{
        printf("Ano nao valido\n");
    }

    return 0;
}
