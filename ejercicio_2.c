#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int numero1;
	int numero2;
	int resultado;

	do
	{
		printf("\nIngrese 1 numero: ");
		scanf("%d",&numero1);
		if(numero1==0)
		{
			printf("\nError. Ingrese un número distinto de 0.");
		}
	} while (numero1==0);

	
	do
	{
		printf("\nIngrese 2 numero: ");
		scanf("%d",&numero2);
		if(numero2==0)
		{
			printf("\nError. Ingrese un número distinto de 0.");
		}
	} while (numero2==0);

	resultado = a - b;
	printf("\nEl resultado es: %d \n",resultado);

	
	if(resultado>0)
	{
		printf("\nResultado positivo\n");
	}
	else
	{
		printf("\nResultado negativo\n")

	}


return 0;
}
