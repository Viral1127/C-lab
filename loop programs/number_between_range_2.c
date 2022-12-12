#include <stdio.h>
int main()
{
	int x, y;
	printf("enter no1 & no2:");
	scanf("%d %d",&x,&y);
	while(x <= y)
	{
			if(x%2==0)
			{
				printf("%d",x);
			}

		x++;
	}
	return 0;
}