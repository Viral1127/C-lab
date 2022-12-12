#include<stdio.h>
int main()
{
	int num[5],i;
	for (int i = 0; i < 5; i++)
	{
		printf("number of array");
		scanf("%d",&num[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (num[0]>num[i])
		{
			num[0]=num[i];
		}
		else if (num[1]>num[i])
		{
			num[1]=num[i];
		}
		else if (num[2]>num[i])
		{
			num[2]=num[i];
		}
		else if (num[3]>num[i])
		{
			num[3]=num[i];
		}
		else if (num[4]>num[i])
		{
			num[4]=num[i];
		}
		else{
			num[5]=num[i];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d",num[i]);
	}
}