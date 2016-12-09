#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializacionAleatoria();

int main(int argc, char * argv[])
{
	srand(time(NULL));
	inicializacionAleatoria();
}

void inicializacionAleatoria()
{
	int posicionRandom;
	int i;
	int *arreglo = malloc(sizeof(int)*536870912);
	clock_t comienzo = clock();
	for(i=0;i<536870912;i++)
	{
		posicionRandom = rand() % 536870912;
		arreglo[posicionRandom]= posicionRandom;
	}
	clock_t final = clock();
	double ciclosDeReloj = final - comienzo;
	printf("La inicializacion del arreglo ha demorado %f\n ciclos de reloj", ciclosDeReloj);
}