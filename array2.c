#include<stdio.h>
void main()
{
	int r,c;
	printf("Enter a row:");
	scanf("%d",&r);
	printf("Enter a column:");
	scanf("%d",&c);
	int arr[r][c];
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("********\n");
		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
