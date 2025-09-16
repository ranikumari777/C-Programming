#include<stdio.h>
#include<conio.h>
main()
{
	int marks,sum=0,i;
	printf("enter 5 subject:");
    scanf("%d",&marks);
	for(i=1; i<=6; i++)
	{
		printf("%d\n",marks);
		sum=sum+marks;
	}
	printf("sum=%d",sum);
}
