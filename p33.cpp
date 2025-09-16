//wap to count digits of a number.
#include<stdio.h>
main()
{
	int num,count=0,t;
	printf("enter a number:");
	scanf("%d",&num);
	t=num;
	for( ;num>0; num=num/10)
	{
		count++;
		
	}
	printf("number of digits in %d is %d",t,count);
}
