#include<stdio.h>
int main()
{
	int a,b,c,d,e,ans;
	printf("enter maths mark\n");
	scanf("%d",&a);
	printf("enter chemistry mark\n");
	scanf("%d",&b);
	printf("enter physics mark\n");
	scanf("%d",&c);
	printf("enter english mark\n");
	scanf("%d",&d);
	printf("enter computer mark\n");
	scanf("%d",&e);
	ans=(a+b+c+d+e)/5;
	if(ans<35)
	{
		printf("fail");
	}
	else if(ans<35 && ans>45)
	{
		printf("pass");
	}
	else if(ans<45 && ans>60)
	{
		printf("2nd class");
	}
	else if(ans<60 && ans>70)
	{
		printf("1st class");
	}
	else if(ans>70)
	{
		printf("distiction");
	}
	return 0;
}