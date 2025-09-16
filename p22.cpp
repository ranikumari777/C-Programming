//wap to add all number within 1 to n that is divisiable by 3.
#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter of number:");
	scanf("%d",&n);
		for(i=1; i<=n; i=i*3 )
		{
			//sum=sum+i;
			printf("%d\n",i);
				sum=sum+i;
		}
		printf("sum=%d",sum);
}
