//count the number of elements in given array greater than a given number x.
#include<stdio.h>
void main()
{
	int count=0;
	int x,i;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<=n; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	for(i=0; i<=n; i++)
	{
		if(arr[i]>x)
		count++;
	}
	printf("Total numbers is %d",count);
	
}
