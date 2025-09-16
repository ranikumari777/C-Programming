//wap to input a number and cheak number is poilidram is not.
#include<stdio.h>
main()
{
	int n,t,r,sum=0;
	printf("enter a first number:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=r+(sum*10);
		n=n/10;
		
	}
	if(t==sum)
	
		printf("polidram:");	
	else
	printf("not polidram:");
}
