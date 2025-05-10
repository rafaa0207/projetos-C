#include <stdio.h>

int main () {
    int Nf, Ht;
    printf("Numero do Funcionario: ");
    scanf("%d", &Nf);
    printf("Horas trabalhadas do funcionario: ");
    scanf("%d", &Ht);
    float VpH;
    printf("Insira o valor por hora do funcionario: ")
    scanf("%f", &VpH);

    printf("NUMERO = %d\n", Nf);
    printf("SALARIO = U$ %.2f\n" ,
    Ht*VpH);

return 0;
}