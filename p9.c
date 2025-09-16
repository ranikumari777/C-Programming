#include<stdio.h>
void main()
{
	int i;
	printf("enter strting of series:");
	scanf("%d",&i);
	if(i<=20)
	{
		for( ; i<=20; i=i+1)
		{
			if(i%2==0)
			printf("%d\n",i);
			
		}
	}
	else{
	
	printf("plese enter a number less than 20");
}	
}

