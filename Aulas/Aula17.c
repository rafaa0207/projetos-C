#include <stdio.h>

int main () {
    float x, y;

    printf("Insira o valor de x: ");
    scanf("%f", &x);
    printf("Insira o valor de y: ");
    scanf("%f", &y);

    if(x == 0 && y == 0)
        printf("O ponto (%.2f , %.2f) se encontra na origem", x, y);
    else if (x > 0 && y > 0)
        printf("O ponto (%.2f , %.2f) pertence ao Q1\n", x, y);
    else if (x > 0 && y < 0)
        printf("O ponto (%.2f , %.2f) pertence ao Q4\n", x, y);
    else if (x < 0 && y > 0)
        printf("O ponto (%.2f , %.2f) pertence ao Q2\n", x, y);
    else if (x < 0 && y < 0)
        printf("O ponto (%.2f , %.2f) pertence ao Q3\n", x, y);
    else if (x == 0)
        printf("O ponto (%.2f , %.2f) pertence ao Eixo y\n", x, y);
    else if (y == 0)
        printf("O ponto (%.2f , %.2f) pertence ao Eixo X\n", x, y);

return 0;

}