#include<stdio.h>
void main()
{
	int h,m,p,s;
	printf("enter a second");
	scanf("%d",&s);
	h=s/3600;
	m=(s%3600)/60;
	p=(s%3600)%60;
	printf("%d%d%d",h,m,p);
}
