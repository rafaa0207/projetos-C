#include <stdio.h>

int main () {
    int cod, quant;
    double total;

    printf("Insira o codigo do produto: ");
        scanf("%d", &cod);
    printf("Insira a quantidade: ");
        scanf("%d", &quant);

    switch (cod)
    {
    case 1:
        total = quant * 4;
        break;    
        
    case 2:
        total = quant * 4.50;
        break; 

    case 3:
        total = quant * 5;
        break;
            
    case 4:
        total = quant * 2;
        break;
            
    case 5:
        total = quant * 1.50;
        break;    
    
    default:
        printf("codigo nao encontrado\n");
        break;
    }

    printf("Total: R$%.2f\n", total);

    return 0;
}