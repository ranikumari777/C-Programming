#include<stdio.h>
 main()
{
	int a=1,b;
	b=a++ + a++ + ++a;
	printf("a=%d",a);
	printf("b=%d",b);
	return(0);
}
