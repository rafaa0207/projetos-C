#include <stdio.h>

int main () {
    int dias;

    printf("Insire a quantidade de dias: ");
    scanf("%d", &dias);

    printf("O valor inserido foi de %d dias\n", dias);
    printf("%d ano(s)\n", dias/365);
        dias = dias%365;
    printf("%d mes(es)\n", dias/30);
        dias = dias%30;
    printf("%d dia(s)", dias/1);
        dias = dias%1;

        return 0;

}