#include <stdio.h>
#include <stdlib.h> //biblioteca que pega outras operações

int main (int argc, char *argv[]) // use o () para adicionar mais operações
{
    float A, B;
    printf("Insira sua primeira nota: ");
    scanf("%f", &A);
    printf("Insira o valor de sua segunda nota: ");
    scanf("%f", &B);

    printf("MEDIA = %.5f\n", 
    (((A * 3.5)+(B * 7.5))/11)) ;

return 0;
}