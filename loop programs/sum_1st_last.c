#include<stdio.h>
int main()
{
	int n,Fd,Ld,sum=0;
	printf("enter number");
	scanf("%d",&n);
	Ld=n%10;
	while(n>=10)
	{
		n=n/10;
		Fd=n;
	}
	sum=Ld+Fd;
	printf("%d\n",sum );
	return 0;
}