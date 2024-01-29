#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Fa�a um Programa que pergunte em que turno voc� estuda. Pe�a para
digitar M- matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem
"Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inv�lido!", conforme o
caso.
*/

int main(){

    char turno;

    printf("Informe o turno em que voce estuda (Use: M para matutino, V para vespertino e N para noturno): \n");
    scanf("%c", &turno);

    switch (turno)
    {
    case 'M':
    case 'm':
        printf("Bom dia!\n");
        break;
    case 'V':
    case 'v':
        printf("Boa Tarde!\n");
        break;
    case 'N':
    case 'n':
        printf("Boa Noite!\n");
        break;
    default:
        printf("Valor invalido\n");
    }

    return 0;
}
