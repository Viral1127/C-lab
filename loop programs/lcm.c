#include <stdio.h>
int main()
{
	int n1,n2,max,lcm;
	printf("enter value of n1 & n2:");
	scanf("%d %d",&n1,&n2);
	max=(n1>n2)?n1:n2;
	while(1)
	{
		if(max%n1==0 && max%n2==0)
		{
			lcm=max;
			break;
		}
		max++;
	}
	printf("Lcm of given number is=%d\n",lcm);
	return 0;
}