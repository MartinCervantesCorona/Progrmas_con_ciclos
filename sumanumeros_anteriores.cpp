#include <stdio.h>
	int fin,i=1,sum;
	int main ()
    {	printf("Ingresa un numero\n");
		scanf("%d",&fin);
		while(i<=fin)
		{
			printf("%d\n",i);
			sum=i+sum;
			i=i+1;
		}
		printf("La suma de los numeros anteriores es %d\n",sum);
	}


