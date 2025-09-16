//wap to print reverse of a number.
#include<stdio.h>
main()
{
	int n,r,sum=0,t;
	printf("enter a number:");
	scanf("%d",&n);
	t=n;
	for( ; n>0; n=n/10)
	{
		r=n%10;
		printf("%d\n",r);
		//sum=sum*10+r;
	}
	printf("sum of digit of %d is %d",t,sum);
	if(t==sum)
	{
		printf("polidram");
	}
}
