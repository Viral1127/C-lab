#include<stdio.h>
int main()
{
	int num[3][3],i,j;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("enter array element");
			scanf("%d",&num[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %d",num[i][j]);
		}
		printf("\n");
	}
}