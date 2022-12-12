#include <stdio.h>
int main()
{
	int n,rev=0,rem=1,number;
	printf("enter number");
	scanf("%d",&n);
	number=n;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("%d",rev);
	if(rev==number)
	{
		printf("palindrome number");
	}
	else
	{
		printf("not palindrome number");
	}
	return 0;
}