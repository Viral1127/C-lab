#include<stdio.h>
int main()
{
	int n,i=1,ans;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		ans=i*n;
		printf("%d *%d =%d",n,i,ans);
		i++;
	}
	
	return 0;
}