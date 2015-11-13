#include<stdio.h>
    int num1,num2,i;
    int main()
	{
	
	printf("hasta que numero quieres llegar\n");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		if(i%2==0)
		{
			for(num2=1;num2<=i;num2++)
			{				
				printf("%d",i);	
			}         			
		}
		else
		{        
			printf("\n%d\n",i);            
		}
	}
}
