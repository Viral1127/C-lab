#include <stdio.h>
int main()
{
	int n1,n2,min,i=1,gcd;
	printf("enter value of n1 & n2:");
	scanf("%d %d",&n1,&n2);
	min=(n1<n2)?n1:n2;
	while(i<=min)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
		i++;
	}
	printf("gcd is=%d\n",gcd);
	return 0;
}