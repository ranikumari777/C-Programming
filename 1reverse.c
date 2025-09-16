#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,j,count=0;
	printf("enter a string:");
	for(i=0; str[i]!='\0'; i++)
	{
		scanf("%c",&str[i]);
	}
	for(i=0; str[i]!='\0'; i++)
	{
		count++;
	}
	for(j=(count-1); j>=0; j--)
	{
		printf("%c",str[j]);
	}
}
