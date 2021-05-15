/*
Escribir el código de la función recursiva dec2bin() que recibe un número como
argumento y lo imprime en la pantalla en binario.
*/

#include <stdio.h>

#define GAP 48

void dec2bin(int n);

int main()
{
	//ingreso del numero decimal
	printf("Ingrese un numero:\n");
	
	char c;
	int num = 0;
	while( (c=getchar()) != '\n')
	{
		num = num*10 + (c-GAP);
	}
	//printf("%d\n", num);

	dec2bin(num);
	//int bin[] = ;
	

	return 0;
}


void dec2bin(int n)
{
	int bin;
	//caso base para enteros iguales a 0
	if (n == 0)
	{	
		printf("%d\t%d\n", n, n%2);
		return;
	}
	else
	{
		dec2bin(n/2);
		bin = n%2;
		printf("%d\t%d\n", n, bin);
	}
}