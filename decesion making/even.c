#include <stdio.h>
int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	(n%2==0)?printf("number is even"):printf("number is odd");
	return 0;
}