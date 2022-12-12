#include<stdio.h>
int main()
{
	int n,i=1,a,cube,sum=0,org;
	printf("enter number");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		a=n%10;
		cube=a*a*a;
		sum=sum+cube;
		n=n/10;
	}
	printf("%d\n",sum );
	if(sum==org)
	{
		printf("armstrong number");
	}
	else{
		printf("not armstrong number");
	}
	return 0;
}