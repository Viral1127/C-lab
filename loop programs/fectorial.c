#include <stdio.h>
int main()
{
	int n,i=1,ans=1;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		ans=i*ans;
		i++;
    }
    printf("%d",ans);
	return 0;
}