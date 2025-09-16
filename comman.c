//C program that replaces all vowels in a string with a specified character
#include<stdio.h>
#include<string.h>
void main()
{
	char str[60],ch,i;
	puts("string enter");
	gets(str);
	puts("special");
	scanf("%c",&ch);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i')
		str[i]=ch;
	}
	printf("%s",str);
	
}
