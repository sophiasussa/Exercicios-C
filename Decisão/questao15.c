#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fa�a um Programa que tendo como dados de entrada o pre�o de custo
de um produto e um c�digo de origem, emita o pre�o junto de sua
proced�ncia. Caso o c�digo n�o seja nenhum dos especificados, o
produto deve ser classificado como importado. C�digo de origem: 1 - Sul,
2 � Norte, 3 - Leste, 4 - Oeste, 5 ou 6 - nordeste 7 ou 8 Centro-oeste
*/

int main(){

    int codigo;
    double custo;

    printf("Informe o custo do produto: \n");
    scanf("%lf", &custo);

    printf("Informe o codigo de origem: \n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("O valor do produto eh: %.2lf e sua origem eh do sul", custo);
        break;
    case 2:
        printf("O valor do produto eh: %.2lf e sua origem eh do norte", custo);
        break;
    case 3:
        printf("O valor do produto eh: %.2lf e sua origem eh do leste", custo);
        break;
    case 4:
        printf("O valor do produto eh: %.2lf e sua origem eh do oeste", custo);
        break;
    case 5:
    case 6:
        printf("O valor do produto eh: %.2lf e sua origem eh do nordeste", custo);
        break;
    case 7:
    case 8:
        printf("O valor do produto eh: %.2lf e sua origem eh do centro-oeste", custo);
        break;
    default:
        printf("O valor do produto eh: %.2lf e sua origem eh importada", custo);
    }

    return 0;
}
