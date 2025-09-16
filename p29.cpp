//wap to input a number and cheak number is armstrong or not.
#include<stdio.h>
int main()
{
	int n,t,r,arm;
	printf("input a number:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(t==arm)
	printf("armstrong:");
	else
	printf("not armstrong");
}
