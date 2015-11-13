#include <stdio.h>
    int num1,num2;
    int main() 
	{
	printf("ingresa un numero");
	scanf("%d",&num1);
	printf("ingresa otro numero");
	scanf("%d",&num2);
	if(num1<num2)
	{		
		for(;num1<=num2;num1++)
		{			
			printf("%d\n",num1);			
		}		
	}
	else
	{		
		for(;num1>=num2;num1--)
		{		
			printf("%d\n",num1);		
		}				
	}	
}

