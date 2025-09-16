//File Name: moveZerosToEnd.c
//==================================
#include<stdio.h>
void main()
{
	int n,temp,i,j;
	scanf("%d",&n);
	int arr[n];
	for( i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	temp=arr[0];
	for( i=0; i<n; i++)
	{
		temp=arr[i];
		for(j=1; j<i; j++)
		{
			temp=arr[i];
			arr[i]=arr[j-1];
			arr[j-1]=temp;
		}
		printf("%d ",arr[i]);
	}
}
