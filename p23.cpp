#include<stdio.h>
main()
{
	int i,sum=0;
	for(i=2; i<=20; i=i+2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
