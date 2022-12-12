#include <stdio.h>
void sum();
int main()
{
	sum();
}
void sum()
{
	int n1,n2,ans;
	printf("enter n1&n2");
	scanf("%d %d",&n1,&n2);
	ans=n1+n2;
	printf("%d\n",ans);
}