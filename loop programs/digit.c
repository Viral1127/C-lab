#include<stdio.h>
int main()
{
	int n,digit;;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		printf("%d\n",digit);
		n=n/10;
	}
	return 0;
}