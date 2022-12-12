#include<stdio.h>
int main()
{
	int basic,hra,da,gross;
	printf("enter basic\n");
	scanf("%d",&basic);
	if(basic>=10000 && basic<20000)
	{
		hra=(20*basic)/100;
		da=(80*basic)/100;
	}
	else if(basic>=20000 && basic<30000)
	{
		hra=(25*basic)/100;
		da=(90*basic)/100;
	}
	else if(basic>=30000)
	{
		hra=(30*basic)/100;
		da=(95*basic)/100;
	}
	gross=hra+da+basic;
	printf("gross is%d",gross);
	return 0;

}