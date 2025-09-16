//strcmp()
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	puts("Enter a strin1");
	fgets(str1);
	puts("Enter a string2");
	fgets(str2);
	int i=0,ch=0;
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			ch=1;
			break;
		}
		i++;
	}
	if(ch==0)
	puts("its is equal");
	else
	puts("it is not equal");
	
}
