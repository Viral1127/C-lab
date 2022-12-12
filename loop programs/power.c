#include <stdio.h>
int main()
{
	int x,y,i=1,ans=1;
	printf("enter value of x&y");
	scanf("%d %d",&x,&y);
	while(i<=y)
	{
		ans=ans*x;
		i++;
    }
    printf("%d",ans);
	return 0;
}