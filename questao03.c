#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo para ler dois números inteiros A e B e informar se A é
divisível por B.*/

int main(){

   int A, B;

    printf("Informe o primeiro numero: ");
    scanf("%i", &A);

    printf("Informe o segundo numero: ");
    scanf("%i", &B);

    if(A%B == 0){
        printf("A eh divisivel por B\n");
    }else{
       printf("A nao eh divisivel por B\n");
    }

    return 0;
}
