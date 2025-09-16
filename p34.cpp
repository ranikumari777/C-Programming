#include<stdio.h>
#include<math.h>
main()
{
	int num,count=0,t,d;
	double sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	t=num;
	for( ;num<0; num=num/10)
	{
		count++;
		
	}
	num=t;
	for( ; num>0; num=num/10)
	{
		d=num%10;
		sum=sum+pow(d,count);
		
	}
	if(t==sum)
	{
		
	}
	else
	{
		
	}
}
