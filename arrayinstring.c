#include<stdio.h>
#include<string.h>
void main()
{
	int row,col,i,j;
	scanf("%d",&row);
	scanf("%d",&col);
	char arr[row][col];
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%c",&arr[row][col]);
		}	
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%c\n",arr[row][col]);
		}	
	}
}
