#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50],strcon[100];
	int i,count=0;
	puts("enter first string");
	gets(str1);
	puts("enter second string");
	gets(str2);
	for(i=0; str1[i]!='\0'; i++)
	{
		count++;
	}
	for(i=0; str2[i]!='\0'; i++)
	{
		str1[count]=str2[i];
		count++;
	}
	str1[count]='\0';
	puts(str1);
}
