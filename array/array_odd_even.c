#include <stdio.h>
int main()
{
	int stu[10],i,even=0,odd=0;
	for(i=0;i<10;i++)
	{
		printf("enter array element");
		scanf("%d",&stu[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if(stu[i]%2==0)
		{
			even=even+1;
		}
		else{
			odd=odd+1;
		}
	}
		printf("even:%d\n odd:%d\n",even,odd);
	return 0;
}
	