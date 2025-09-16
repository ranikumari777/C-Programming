#include<stdio.h>
main()
{
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=2; i<=20; i=i+n)
	{
		printf("%d\n",i);
	}
}

