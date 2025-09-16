#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int bu[n];
	int i,j;
	for(i=0; i<n; i++)
	{
		scanf("%d",&bu[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d\t",bu[i]);
	}
	printf("*******\n");
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<=n-2; j++)
		{
			if(bu[j]>bu[j+1])
			{
				int temp=bu[j];
			bu[j]=bu[j+1];
			bu[j+1]=temp;
			}
		}
	}
	printf("\n");
		for(i=0; i<n; i++)
	{
		printf("%d\t",bu[i]);
	}
}
