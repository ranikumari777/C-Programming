#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int countuppar=0,countlower=0,countspace=0,countsnewline=0,count=0,countvowel=0;
	puts("enter all string");
	gets(str);
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
				countuppar++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			countlower++;
		}
		else if(str[i]>=' ')
		{
			countspace++;
		}
			else if(str[i]>='\n')
		{
			countsnewline++;
		}
		else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u')
		{
			countvowel++;
		}
		
		
	}
		printf("\n %d",countvowel);
			printf("%d",countlower);
				printf("%d",countsnewline);
				printf("%d",countuppar);
				printf("%d",countspace);
				
				
	//printf("")
	
	
}
