#include<stdio.h>
main()
{ 
int num;
printf("enter a num");
scanf("%d",&num);
switch(num%2) 
{
	case0:
	printf("%d is even number",num);
	break;
	case1:
	printf("%d is odd number",num);
	break;	
}
return;
}
