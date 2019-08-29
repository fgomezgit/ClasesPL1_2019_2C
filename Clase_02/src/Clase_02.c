/*
 ============================================================================
 Name        : Clase_02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT_ITERA 5

int calcularMinimoMaximo(int cantidadNumeros, int *resultadoMaximo, int * resultdoMinimo)

int main(void)
{
	//printf("ingrese la cantidad de veces va a ingresar un número");
	//int cantidadDeVeces;
	//scanf("%d",&cantidadDeVeces);

	int resultadoMaximo;
	int resultadoMinimo;

	if(calcularMinimoMaximo(&resultadoMaximo,&resultadoMinimo)== 0)
	{
		printf("El resultado máximo es %d y el resultado minimo es %d",resultadoMaximo,resultadoMinimo);
	}
	retun 0;




}


int calcularMinimoMaximo(int cantidadNumeros, int *resultadoMaximo, int * resultadoMinimo)
{
	int numero;
	int i;
	int maximo;
	int minimo;
	int retorno = -1;
	if(cantidadNumeros>0 && *resultadoMaximo != NULL *resultadoMinimo != NULL)
	{
		for(i=0;1<cantidadNumeros;1++)
		{
			printf("ingrese un numero: \n")
			scanf("%d",&numero);
			if(i==0 || numero > maximo)
			{
				maximo=numero;
			}
			if(i==0 || numero < minimo)
			{
				minimo=numero;
			}
		}

	}
	*resultadoMaximo = maximo;
	*resultadoMinimo = minimo;
	retun retorno;

}




//calcular
//
//main si salio bien lo imprimo
//sino errror
//calcularMaximoYminimo
//-1 o 0(indicar que salio )
