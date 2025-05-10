#include <stdio.h>

int main () {
    int codigo, numeroPecas;
    float valorPeca, valorTotal;
    valorTotal = 0;

printf("Insire o codigo do primeiro produto: ");
scanf("%d", &codigo);
printf("Insira o numero de pecas que tem o produto: ");
scanf("%d", &numeroPecas);
printf("Insire o valor de cada peca: R$");
scanf("%f", &valorPeca);

valorTotal = valorTotal + (numeroPecas*valorPeca);

printf("Insire o codigo do segundo produto: ");
scanf("%d", &codigo);
printf("Insira o numero de pecas que tem o produto: ");
scanf("%d", &numeroPecas);
printf("Insire o valor de cada peca:R$");
scanf("%f", &valorPeca);

valorTotal = valorTotal + (numeroPecas*valorPeca);

printf("Valor a pagar: R$ %.2f\n", valorTotal);

return (0);

}