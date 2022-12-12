#include <stdio.h>
int main()
{
	int stu[10],i,pos=0,neg=0,zero=0;
	for(i=0;i<10;i++)
	{
		printf("enter array element");
		scanf("%d",&stu[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if(stu[i]>0)
		{
			pos=pos+1;
		}
		else if(stu[i]<0)
		{
			neg=neg+1;
		}
		else{
			zero=zero+1;
		}
	}
		printf("positive%d\n negative%d\n zero%d\n",pos,neg,zero);
	return 0;
}
	