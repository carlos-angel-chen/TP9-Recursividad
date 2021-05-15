/*
Escribir de manera recursiva una función que devuelve si un arreglo es capicúa 
(es decir, sus elementos están espejados). El prototipo debe ser:

int is_capicua(int* p1, int *p2);

Siendo p1 un puntero al primer elemento de un arreglo y p2 uno al último.
*/

#include <stdio.h>

int isCapicua(int* p1, int* p2);

int main(int argc, char const *argv[])
{
	int msj[] = {1,1,1,0,1,0,0,1,1,1};//
	int *p1, *p2, last;

	last = sizeof(msj)/sizeof(msj[0])-1;	

	p1 = &msj[0];
	p2 = &msj[last];

	printf("%d\n", isCapicua(p1, p2));

	return 0;
}


int isCapicua(int* p1, int* p2)
{

	/*
	Analizo mis casos bases y observo que tengo 2
		1. Cuando tengo solo 1 elemento
			Aca puede pasar de que tenga solo 1 elemento, y el segundo caso es cuando tengo un 
			arreglo con una cantidad de elementos impares
		2. Cuando tengo 2 elementos
			Aca puede pasar de que tengo 2 elementos y verifico si son iguales o no
			El otro caso es que reduzco la comparacion hasta tener 2 elementos para comparar y veo 
			si son iguales o no para terminar de comparar si son capicua
	*/

	if (*p1 != *p2)
	{
		return 0;
	}
	//Casos bases
	else if (p1 == p2)				//caso base 1
	{
		return 1;
	}
	else if (p2 == (p1+1))		//caso base 2
	{
		return 1;
	}
	else
	{
		return isCapicua(p1+1, p2-1);
	}

	return 0;
}