#include <stdio.h>
#include <math.h>

int main () {
    double basetrianA, alttrianC, raiocircC, basetrapA,baseTrapB, alturatrapC, ladoquadB, 
    baseretA, altretB, triangulo, circulo, trapezio, quadrado, retangulo, pi ;
    printf("Todos os valores a seguir deverão ser colocados em m2!\n");
    printf("Insira o valor da base do triangulo retangulo: ");
    scanf("%lf", &basetrianA);
    printf("Insira o valor da altura do triangulo retangulo: ");
    scanf("%lf", &alttrianC);

triangulo = (basetrianA*alttrianC)/2;

    printf("Insira o valor do raio do circulo: ");
    scanf("%lf", &raiocircC);

pi = 3.1415;
circulo = pi*pow(raiocircC, 2);

    printf("Insira o valor da base maior do trapezio: ");
    scanf("%lf", &basetrapA);
    printf("Insira o valor da base menor do trapezio: ");
    scanf("%lf", &baseTrapB);
    printf("Insira o valor da altura do trapezio: ");
    scanf("%lf", &alturatrapC);

trapezio = ((basetrapA*baseTrapB)*alturatrapC)/2;

    printf("Insira o valor do lado do quadrado: ");
    scanf("%lf", &ladoquadB);

quadrado = pow(ladoquadB, 2);

    printf("Insira o valor da base do retangulo: ");
    scanf("%lf", &baseretA);
    printf("Insira o valor da altura do retangulo: ");
    scanf("%lf", &altretB);

retangulo = baseretA*altretB;

    printf("TRIANGULO = %.2lf\n  CIRCULO = %.2lf\n  TRAPEZIO = %.2lf\n  QUADRADO = %.2lf\n  RETANGULO = %.2lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

return 0;
}