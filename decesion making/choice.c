#include<stdio.h>
int main()
{
	int a,b,choice,ans;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	printf("enter choice");
	scanf("%d",&choice);
	if(choice==1)
	{
		ans=a+b;
	}
	else if(choice==2)
	{
		ans=a-b;
	}
	else if(choice==3)
	{
		ans=a*b;
	}
	else if(choice==4)
	{
		ans=a/b;
	}
	printf("answer is%d",ans);
	return 0;
}