#include <stdio.h> 

int main() {
    printf("Insire o valor do raio em metro:");
   double A, R, pi; //double é para número fracionado, o int é para número inteiro
    pi = 3.14159;
    scanf("%lf", &R);
    A = R*R*pi;
    printf("A = %.4lf m2\n", A);

    return 0;
}
