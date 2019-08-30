#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
    int numero;
    int contadorNegativo = 0;
    int contadorPositivo = 0;

    for(i=0;i<10;i++)
    {
        printf("\nIngrese un número\n");
        scanf("%d",numero);
        if(numero>=0)
        {
            contadorPositivo++;
        }
        else
        {
            contadorNegativo++;
        }
    }

    printf("\nLa cantidad de positivos es %d y la cantidad de negativos es %d\n",contadorPositivo,contadorNegativo);
    return 0;

}