#include <stdio.h>

int main() {
    int valor ;
    printf("Insire o valor a ser decomposto: R$");
    scanf("%d", &valor);

    printf("%d\n", valor);
    printf("%d nota(s) de R$100,00\n", valor/100);
        valor = valor % 100;
    printf("%d nota(s) de R$50,00\n", valor/50);
        valor = valor%50;
    printf("%d nota(s) de R$20,00\n", valor/20);
        valor = valor%20;
    printf("%d nota(s) de R$10,00\n", valor/10);
        valor = valor%10;
    printf("%d notas de R$5,00\n", valor/5);
        valor = valor%5;
    printf("%d notas de R$2,00\n", valor/2);
        valor = valor%2;
    printf("%d moeda(s) de R$1,00\n", valor/1);
        valor = valor%1;

    return 0;
}