#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fa�a um programa para o c�lculo de uma folha de pagamento, sabendo
que os descontos s�o do Imposto de Renda, que depende do sal�rio bruto
(conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde
a 1% do Sal�rio Bruto, mas n�o � descontado (� a empresa que deposita).
O Sal�rio L�quido corresponde ao Sal�rio Bruto menos os descontos. O
programa dever� pedir ao usu�rio o valor da sua hora e a quantidade de
horas trabalhadas no m�s. Siga as regras:
Desconto do IR:
Sal�rio Bruto at� 900 (inclusive) � isento
Sal�rio Bruto at� 1500 (inclusive) - desconto de 5%
Sal�rio Bruto at� 2500 (inclusive) - desconto de 10%
Sal�rio Bruto acima de 2500 - desconto de 20%
*/

int main(){

    double horas, valor, salar_liq, salar_brut, fgts, ir, sind;

    printf("Informe o valor hora: ");
    scanf("%lf", &valor);

    printf("Informe as horas trabalhadas: ");
    scanf("%lf", &horas);

    salar_brut = horas * valor;
    fgts = salar_brut * 0.01;
    sind = salar_brut * 0.03;

    if(salar_brut <= 900){
        ir = 0;
    } else if (salar_brut <= 1500){
        ir = salar_brut * 0.05;
    } else if (salar_brut <= 2500){
        ir = salar_brut * 0.10;
    } else if (salar_brut > 2500){
        ir = salar_brut * 0.20;
    }

    salar_liq = salar_brut - ir - sind;

    printf("O salario bruto foi: %.2lf \n", salar_brut);
    printf("O FGTS foi: %.2lf \n", fgts);
    printf("O desconto do sindicato foi: %.2lf \n", sind);
    printf("O desconto do Imposto de Renda foi: %.2lf\n", ir);
    printf("O salario liquido foi: %.2lf", salar_liq);

    return 0;
}
