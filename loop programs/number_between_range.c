#include<stdio.h>
int main()
{
	int x, y;

	printf("enter no1 & no2:");
	scanf("%d %d",&x,&y);
	while(x <= y)
	{
		printf("%d\n",x);
		x++;
	}
	return 0;
}