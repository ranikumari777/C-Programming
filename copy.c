#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	int brr[10];
	for(i=0; i<=n; i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0; i<=n; i++)
	{
	   brr[i]=arr[n-i];
	}
	for(i=0; i<=n; i++)
	{
	   printf("%d\n",brr[i]);
	}
	
	
}
