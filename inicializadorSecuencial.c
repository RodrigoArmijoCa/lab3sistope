#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializacionSecuencial();

int main(int argc, char * argv[])
{
	srand(time(NULL));
	inicializacionSecuencial();
}

void inicializacionSecuencial()
{
	int numeroRandom;
	int i;
	int *arreglo = malloc(sizeof(int)*536870912);
	clock_t comienzo = clock();
	for(i=0;i<536870912;i++)
	{
		numeroRandom = rand() % 536870912;
		arreglo[i]= numeroRandom ;
	}
	clock_t final = clock();
	double ciclosDeReloj = (final - comienzo);
	printf("La inicializacion del arreglo ha demorado %f\n ciclos de reloj", ciclosDeReloj);
}