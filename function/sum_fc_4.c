#include <stdio.h>
int sum(int x,int y);
int main()
{
	int n1,n2,x;
	scanf("%d %d",&n1,&n2);
	x=sum(n1,n2);
	printf("%d\n",x);
}
int sum(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;
}