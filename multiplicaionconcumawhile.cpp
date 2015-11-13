#include<stdio.h>
    int n1,n2,res,a=1;
    int main()
{
     printf("Ingrese un numero\n");
     scanf("%d", &n1);
     printf("Ingresa otro numero\n");
     scanf("%d", &n2);
    while(a<=n1)
	{
		res=n2+res;
   		a=a+1;
		
	}
	printf("El resultado es: %d", res);
}

