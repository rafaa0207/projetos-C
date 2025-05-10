#include <stdio.h>

int main () {
    int X, Y, Z, temp;

    printf("Insira o valor de X: ");
        scanf("%d", &X);
    printf("Insira o valor de Y: ");
        scanf("%d", &Y);
    printf("Insira o valor de Z: ");
        scanf("%d", &Z);

    if (X > Y)
        temp = X;
        X = Y;
        Y = temp;

    if (Y > Z)
        temp = Y;
        Y = Z;
        Z = temp;

}