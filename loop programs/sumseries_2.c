#include <stdio.h>
int main()
{
	int n,i=1,ans=1,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		ans=i*i;
		sum=sum+ans;
		i++;
	}
	printf("%d",sum);
	return 0;
}