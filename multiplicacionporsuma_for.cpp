#include <stdio.h>
    int num1,num2,res,i;
    int main() 
	{
	printf("ingrese un numero:\n");
	scanf("%d",&num1);
	printf("ingrese otro numero\n");
	scanf("%d",&num2);
	for(i=1;i<=num1;i++)
	{
		res=res+num2;
	}
	
	printf("%d",res);
}
