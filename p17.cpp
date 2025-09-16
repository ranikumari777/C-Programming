//wap to print all even number within n to 20(where n is less than)
#include<stdio.h>
main()
{
	int i;
	printf("enter a number of series");
	scanf("%d",&i);
	if(i<=20)
	{
		for( ; i<=20; i=i+2)
		{
			if(i%2==0)
			printf("%d\n",i);
	}	}
	else
	{
	
	printf("please entre a value that is less than 20");
}
}
