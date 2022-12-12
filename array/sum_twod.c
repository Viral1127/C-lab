#include<stdio.h>
int main()
{
	int num1[3][3],i,j,sum=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("enter array-1 element");
			scanf("%d",&num1[i][j]);
		}
	}
	int num2[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("enter array-2 element");
			scanf("%d",&num2[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum=num1[i][j]+num2[i][j];
			printf(" %d",sum);
		}
		printf("\n");
	}
	
}