#include<stdio.h>
void main()
{
	int i,j,sum=0;
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int arr[m][n];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("************\n");
		for(i=0; i<m-1; i++)
		{
		for(j=1; j<n; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
		}
		printf("************\n");
		for(i=0; i<m-1; i++)
		{
		for(j=1; j<n; j++)
		{
			sum=sum+arr[i][j];
		}
		printf("\n");
		}
		printf("sum of numbers=%d",sum);
}
