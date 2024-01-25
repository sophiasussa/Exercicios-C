#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um Programa que verifique se uma letra digitada é vogal ou
consoante
*/

int main(){

    char letra;

    printf("Informe uma letra: \n");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'u':
    case 'o':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("A letra eh vogal: %c", letra);
        break;
    default:
        printf("A letra eh consoante: %c", letra);
    }

    return 0;
}
