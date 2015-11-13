#include <stdio.h>
int dias=1,i,profundidad,avanza,retro;
int main ()
{
	printf("De que profundidad es el oyo en el que esta el cangrejo ");
	scanf("%d",&profundidad);
	printf("Cuantos metros logro subir el cangrejo ");
	scanf("%d",&avanza);
	printf("Cuantos metros retrocede el cangrejo ");
	scanf("%d",&retro);
	for (dias=1;profundidad>=0;dias++)
	{
		if (profundidad>=0)
		{
			profundidad=profundidad-avanza;
		}	
		if (profundidad>=0)
		{
			profundidad=profundidad+retro;	
		}
	}
	printf("El cangrejo tardo %d dias en salir",dias);
}


