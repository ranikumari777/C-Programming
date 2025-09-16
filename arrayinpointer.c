#include<stdio.h>
void main()
{
int arr[5]={1,2,3,4,5};
int *p;
 p=&arr[0];
printf("%d\n",*(p+1));
printf("%p\n",*(p+1));
printf("%d\n",*(p+2));
printf("%p\n",*(p+2));
printf("%d\n",*(p+3));
printf("%p\n",*(p+3));
printf("%d\n",*(p+4));
printf("%p\n",*(p+4));
}
