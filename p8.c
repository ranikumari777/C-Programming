#include<stdio.h>
void main()
{
	int ch,n1,n2;
	printf("enter your choice(1-addition,2-substruction,3-multiplication,4-div)");
	scanf("%d",&ch);
	printf("enter your number");
	scanf("%d,%d",&n1,&n2);
	if(ch==1)
	{
		printf("add=%d",n1+n2);
	}
	else if(ch==2)
	{ 
	printf("sub=%d",n1-n2);
	}
	else if(ch==3)
	{
		printf("mul=%d",n1*n2);
	}
}

