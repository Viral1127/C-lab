#include <stdio.h>
int sum();
int main()
{
	int x;
	x=sum();
	printf("%d\n",x);
}
int sum()
{
	int n1,n2,ans;
	printf("enter n1 & n2\n");
	scanf("%d %d",&n1,&n2);
	ans=n1+n2;
	return ans;
}