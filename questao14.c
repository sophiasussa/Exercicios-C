#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa para o cálculo de uma folha de pagamento, sabendo
que os descontos são do Imposto de Renda, que depende do salário bruto
(conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde
a 1% do Salário Bruto, mas não é descontado (é a empresa que deposita).
O Salário Líquido corresponde ao Salário Bruto menos os descontos. O
programa deverá pedir ao usuário o valor da sua hora e a quantidade de
horas trabalhadas no mês. Siga as regras:
Desconto do IR:
Salário Bruto até 900 (inclusive) – isento
Salário Bruto até 1500 (inclusive) - desconto de 5%
Salário Bruto até 2500 (inclusive) - desconto de 10%
Salário Bruto acima de 2500 - desconto de 20%
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
