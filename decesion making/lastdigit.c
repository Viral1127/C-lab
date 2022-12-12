#include<stdio.h>
int main()
{
	int n,ans;
	printf("enter number\n");
	scanf("%d",&n);
	ans=n%10;
	if(ans%2==0)
	{
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
	return 0;

}