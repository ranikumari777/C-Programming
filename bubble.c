#include<stdio.h>
void main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<=n-2; j++)
		{
			if(arr[j]<arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;	
			}
			
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
}
