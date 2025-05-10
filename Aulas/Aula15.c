#include <stdio.h>

int main () {
    float N;
    printf("Insire um numero entre 0 e 100: ");
    scanf("%f", &N);

    if (N >= 0 && N<=100)
        if (N<=25)
        {
            printf("Intervalo [0 , 25]");
        }
        else
            if (N<=50)
            {
               printf("Intervalo (25 , 50]");
            }
            else 
                if (N<=75)
                {
                    printf("Intervalo (50 , 75]");
                }
                else
                    if (N<=100)
                    {
                        printf("Intervalo (75 , 100]");
                    }
    else 
        printf("Fora do intervalo!");
                    
    return 0;         
}