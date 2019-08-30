/*
 ============================================================================
 Name        : Clase.c
 Author      : Agustin
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calculoMaxYMin(int *flagFun,int numeroFun,int *MaxFun, int *MinFun);

int main(void)
{
	int numero;
	char respuesta;
	int Max = 0;
	int Min = 0;
	int flag = 0;

	do
	{
		printf("\nIngrese un número");
		scanf("%d",&numero);
		calculoMaxYMin(&flag,numero,&Max,&Min);
		printf("\nDesea continuar? s/n");
		__fpurge(stdin); //limpia el buffer de entrada
		scanf("%c",&respuesta);

	} while(respuesta != 'n');

	printf("El Maximo es %d ",Max);
	printf("El Minimo es %d ",Min);


}

int calculoMaxYMin(int* pFlag,int numeroFun,int* pMax,int* pMin)
{
	int max = *pMax;
	int min = *pMin;
	int flag = *pFlag;


	//pregunto si es la primera vez que entro
	if(flag==0)
	{
		max = numeroFun;
		min = numeroFun;
		*pFlag=1; // paso el flag externo a 1
	}


	if(numeroFun > max)
	{
		max = numeroFun;
	}
	*pMax = max;


	if(numeroFun < min)
	{
		min = numeroFun;
	}
	*pMin = min;


	return 0;
}


int getNumero(int* pNumero, int rangoMax, int rangoMin, int reintentos)
{
	int numero;
	int i;
	int ret=-1; //cargo con error por default

	for(i=0;i<reintentos;i++)
	{
		// pidonumero
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		//validación
		if(numero >= rangoMin && numero <= rangoMax)
		{
			//el numero esta ok
			*pNumero = numero;
			ret=0;
			break;
		}
		else
		{
			printf("Ingrese un rango válido.\n");
		}

	}

	return -1;

}




