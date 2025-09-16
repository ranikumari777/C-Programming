//wap to print all number within a given range.
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a first number of series:");
	scanf("%d",&n);
	printf("enter a last number of series:");
	scanf("%d",&i);
	for( ; i<=n; i++)
	{
		printf("%d\n",i);
	}
}
