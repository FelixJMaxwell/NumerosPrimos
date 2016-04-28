#include<stdlib.h>
#include <stdio.h>
#include <math.h>
#include<time.h>
char arreglo [1000001000];
time_t time(time_t *t);

main(int argc, char *argv[])
{
	time_t ti,tf;
	int y,z,raiz;
	unsigned int interFinal=1000000100;
	unsigned int interInicial = 0;
	int contador=0;

	raiz= sqrt(interFinal)+1;
	time(&ti);
		for(y=0; y<interFinal; y++)
			arreglo[y]=0;
				//criba
					for(y=3; y<=raiz; y++)
						if (arreglo[y]==0)
							for(z=(y+y);z<=interFinal; z+=y)
								arreglo[z]=1;
				//Fin de criba
							for(y=interInicial; y<=interFinal; y+=2)
								{
									if(arreglo[y]==0) {
										contador++;
										printf("%i     ",y);
										}
									}
time(&tf);
	printf("\n\ntiempo: %i Segundos\n", (tf-ti));
	printf("\n\n\nNumero de primos :%i \n", contador);
}
