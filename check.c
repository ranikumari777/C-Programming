#include<stdio.h>
#include<string.h>
int stringfind(char str[50]);
int main()
{
	char str[50];
	int count;
	gets(str);
	count=stringfind(str);
	printf("%d",count);
		return 0;
}
int stringfind(char s[50])
{
	int i,count=0;
	for(i=0; s[i]!='\0'; i++)
	{
		count++;
	}
	return count; 
}
