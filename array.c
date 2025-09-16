#include<stdio.h>
struct student
{
	char name[5];
	int roll[5];
	float marks[5];
}s1;
void main()
{
	int i;
	for(i=0; i<5; i++)
	{
		scanf("%s",&s1.name);
			scanf("%d",&s1.roll);
				scanf("%f",&s1.marks);
	}
	printf("********************\n");
	for(i=0; i<5; i++)
	{
		printf("%s\n",s1.name);
			printf("%d\n",s1.roll);
				printf("%f\n",s1.marks);
	}

}
