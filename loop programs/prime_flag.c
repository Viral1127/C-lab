#include <stdio.h>
int main()
{
	int n,flag=0,i=2;
	printf("enter number");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("is prime number");
	}
	else
	{
		printf("is not prime number");
	}
	return 0;
}