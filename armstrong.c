#include<stdio.h>
void main()
{
	int n,p,sum,d,i;
	scanf("%d",&n);
	p=n;
	for(i=1; i<=n; i++)
	{
		sum=0;
		while(n!=0)
		{
		d=n%10;
		sum=sum+d*d*d;
		n=n/10;	
		}
	
	}
	if(sum==p)
		printf("armstrong %d",sum);
	else
	printf("not armstrong");
}
