#include<stdio.h>
int main()
{
	int n,i=1,ans,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	ans=sum-n;
	if(n==ans)
	{
		printf("number is perfect");
	}
	else{
		printf("number is not perfect");
	}
	return 0;
}