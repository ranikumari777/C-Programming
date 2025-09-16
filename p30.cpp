//wap to input a number and print reverse of the number.
#include<stdio.h>
main()
{
	int n,r;
	printf("input a number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	 } 
}
