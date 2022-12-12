#include<stdio.h>
int max();
int main()
{
	int x;
	x=max();
	printf("max is%d\n",x);
}
int max()
{
	int n1,n2,max;
	printf("enter n1 & n2\n");
	scanf("%d %d",&n1,&n2);
	max=(n1>=n2)?(n1):(n2);
	return max;
}