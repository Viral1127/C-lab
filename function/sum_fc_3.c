#include <stdio.h>
int sum(int x,int y);
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	sum(n1,n2);
}
int sum(int x,int y)
{
	int ans;
	ans=x+y;
	printf("%d\n",ans);
}