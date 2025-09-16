//File Name: print_matrix.c
//==================================
#include<stdio.h>
#include<string.h>
void main()
{
	int a,b,i,j;
	printf("Rows: ");
	scanf("%d",&a);
	printf("Columns: ");
	scanf("%d",&b);
	char arr[a][b];
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			scanf("%c",&arr[i][j]);
	//	gets(arr[i][j]);
		}
	}
	printf("Seating Arrangement Matrix:\n");
		for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			
			printf("%c\n",arr[i][j]);
		//puts(arr[i][j]);
		}
	}
}


