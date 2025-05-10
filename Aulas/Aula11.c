#include <stdio.h>
#include <math.h>

int main () {

float x1, x2, y1, y2,distX, distY, distancia;

    printf("Insira o valor do x1: ");
    scanf("%f", &x1);
    printf("Insira o valor do y1: ");
    scanf("%f", &y1);
    printf("Insira o valor do x2: ");
    scanf("%f", &x2);
    printf("Insira o valor do y2: ");
    scanf("%f", &y2);

    distX = x2 - x1;
    distY = y2 - y1;

    distancia = sqrt(pow(distX, 2) + pow(distY, 2));

    printf("distancia = %.4f", distancia);
return (0);
}