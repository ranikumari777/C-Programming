#include<stdio.h>
void main()
{
	int a,b,i,j;
	scanf("%d",&a);
	scanf("%d",&b);
	int r[a][b];
	int r2[a][b];
	int res[a][b];
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			scanf("%d",&r[i][j]);
		}
	}
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("[%d] ",r[i][j]);
		}
		printf("\n");
	}
		printf("*******\n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			scanf("%d",&r2[i][j]);
		}
	}
		for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("[%d] ",r2[i][j]);
		}
		printf("\n");
	}
	printf("*******\n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			res[i][j]=r[i][j]+r2[i][j];
		}
		printf("\n");
	}
	for(i=0;  i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("[%d] ",res[i][j]);
		}
		printf("\n");
	}
	printf("********\n");
	int max=r[0][0];
		for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			if(max<r[i][j])
			max=r[i][j];
		}
		printf("\n");
	}
	printf("max is =%d\n",max);
		printf("********\n");
	int max2=r2[0][0];
		for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			if(max2>r2[i][j] && max<r[i][j])
			max2=r[i][j];
		}
		printf("\n");
	}
		printf("max2 is =%d\n",max);
}
