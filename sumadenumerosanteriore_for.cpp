#include <stdio.h>
    int n1,i,num;
    int main() 
    {
	printf("ingresa un numero\n");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++){
		printf("%d\n",i);
		num=num+i;		
	}
	printf("La suma de los numero anteriores es de %d\n",num);
}

