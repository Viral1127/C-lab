#include<stdio.h>
int min(int a,int b);
int main()
{
	int n1,n2;
	printf("enter n1&n2");
	scanf("%d %d",&n1,&n2);
	min(n1,n2);
}
int min(int a,int b)
{
	int ans;
	ans=(a<=b)?(a):(b);
	printf("%d\n",ans);
}