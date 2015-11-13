#include <stdio.h>
#include <math.h>
int cal=0,mat,calmat,cont,calt;
float prom;

int main ()
{
	printf ("Cuantas materias tienes\n");
	scanf("%d",&mat);
	do
	{
		printf("\nIngresa la calificacion de la materia\n");
		scanf("%d",&calmat);
		calt=calt+calmat;
		cal++;			
	}
	while (cal<mat);
		prom=(float)calt/mat;
		printf("%f\n",prom);
}
