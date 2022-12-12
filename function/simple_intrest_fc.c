#include <stdio.h>
float si(int x,int y,int z);
int main()
{
	int p,n,r;
	float x;
	scanf("%d %d %d",&p,&n,&r);
	x=si(p,n,r);
	printf("simple intrest is%f\n",x);
}
float si(int x,int y,int z)
{
	float ans;
	ans=(x*y*z)/100.0;
	return ans;
}