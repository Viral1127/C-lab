#include<stdio.h>
float max();
int main()
{
	float x;
	x=max();
	printf("max is%f\n",x);
}
float max()
{
	float n1,n2,n3,max;
	printf("enter n1 & n2 & n3\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	max=(n1>n2)?((n1>n3)?(n1):(n3)):((n2>n3)?(n2):(n3));
	return max;
}