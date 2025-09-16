//find the total number of pairs in the array whose sum is equal to the gieven value x.
#include<stdio.h>
void main()
{
	int n,i,j,x=12,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=1; i<=n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1; i<=n; i++)
	{
		for(j=1+i; j<=n; j++)
		{
			if(arr[i]+arr[j]==x){
			sum++;	
			printf("(%d %d)\n",arr[i],arr[j]);
			}
			
		}
	
	}
		printf("%d",sum);
}
