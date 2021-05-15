/*
Analizar la siguiente función:

int suma_digitos(int n1)
{
	return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
}

a. ¿Cuál es el objetivo de la función?
b. ¿Por qué no funciona?
c. Crear un repositorio de GitHub y subir un main utilizando la función tal cual está escrita. 
   Luego, corregir la función, realizar un commit y pushearlo al repositorio.
*/

#include <stdio.h>

int suma_digitos(int n1);

int main(int argc, char const *argv[])
{
	printf("%d\n", suma_digitos(129));
	return 0;
}

int suma_digitos(int n1)
{
	if (n1 == 0)
	{
		return 0;
	}
	else
	{
		return ((n1 % 10) + suma_digitos(n1 / 10)); //caso recursivo
	}
}


/*
a. 	El objetivo de la funcion es sumar los digitos de un numero entero que le pasas. Ejem: si le paso
	el numero 129, me tiene que devolver la suma de 9+2+1

b.	Tiene 2 errores:
		1.	Cuando llama el return, tiene escrito mal la llamada, en vez de suma_digitos(), esta 
			escrito digitos()
		2.	No tiene caso base, caso del cual sale de la recursividad.

c.	Lo hice a manopla
*/