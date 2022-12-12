#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
	return 0;
}