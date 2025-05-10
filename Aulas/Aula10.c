#include <stdio.h>
#include <math.h>

int main () {
    float A, B, C, pi;
    double TrianguloRe, Circulo, Trapezio, Quadrado, Retangulo;
    printf("Todos os valores devem ser em m2\n");
    printf("Insira o valor de A: ");
    scanf("%f", &A);
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    printf("Insira o valor de C: ");
    scanf("%f", &C);

pi = 3.14159;
TrianguloRe = ((A*C)/2);
Circulo = (pi*pow(C, 2));
Trapezio = (((A + B)*C)/2);
Quadrado = pow(B, 2);
Retangulo = A * B;

printf("TRIANGULO = %.3lfm2\n CIRCULO = %.3lfm2\n TRAPEZIO = %.3lfm2\n QUADRADO = %.3lf\n RETANGULO = %.3lf\n ", TrianguloRe, Circulo, Trapezio, Quadrado, Retangulo);

return 0;
}