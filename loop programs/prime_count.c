#include <stdio.h>
int main()
{
	int n,count=0,i=1;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
	{
		printf("is prime number");
	}
	else
	{
		printf("is not prime number");
	}
	return 0;
}