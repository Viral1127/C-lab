#include <stdio.h>
int main()
{
	int stu[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter array element");
		scanf("%d",&stu[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",stu[i]);
	}
	for (int i=9; i>=0; i--)
	{
		printf("%d\n",stu[i]);
	}
}