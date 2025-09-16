#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50];
    int len1, len2;
    printf("Enter First String: ");
    gets(str1);
    printf("Enter Second String: ");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1==len2)
    {
        if(strcmp(str1, str2)==0)
            printf("\nStrings are Equal");
        else
            printf("\nStrings are not Equal");
    }
//    else
//        printf("\nStrings are not Equal");
//    getchr();
    return 0;
}
