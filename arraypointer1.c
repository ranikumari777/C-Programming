#include<stdio.h>
void main()
{
int arr[5],i;
int *p=&arr;
for(i=0; i<5; i++)
{
scanf("%d",&arr[i]);	
}
for(i=0; i<5; i++)
{
printf("%d\n",*(p+1));	
p++;
}

}
