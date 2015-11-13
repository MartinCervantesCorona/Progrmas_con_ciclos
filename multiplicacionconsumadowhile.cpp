#include<stdio.h>
int n1,n2,res,a=1;
int main()
{
   printf("Ingrese un numero\n");
   scanf("%d", &n1);
   printf("Ingresa otro numero\n");
   scanf("%d", &n2);
   do 
   {
    	res=n2+res;
   		a=a+1;
   }	
   while(a<=n1);
   printf("este es el resultado%d", res);
}

