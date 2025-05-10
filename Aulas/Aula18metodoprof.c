#include <stdio.h>

void bubbleSort (int *vetor) {

    int i, j, aux;

    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2 - i; j++) {
            if(vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }

        }
    }
}

    int main () {
        int numeros[3];
        int i;

        printf("Digite 3 numeros inteiros: ");
            for(i = 0; i < 3; i++) {
                scanf("%d", &numeros[i]);
            }

        bubbleSort(numeros);

        printf("\nNumeros em ordem crescente: \n");
            for(i = 0; i < 3; i++) {
                printf("%d\n", numeros[i]);
            }

        printf("\n");

        printf("Numeros na ordem que foram lidos:\n");
            for(i = 0; i < 3; i++) {
                printf("%d\n", numeros[i]);
            }

        return 0;
    }