#include <stdio.h>
int main()
{
	int stu[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter array element");
		scanf("%d",&stu[i]);
	}
	int max=stu[0],min=stu[0],sum=0,avg,count=0;
	for(int i=0;i<10;i++)
	{
		if(max<stu[i])
		{
			max=stu[i];
		}
		else if(min>stu[i])
		{
		    min=stu[i];
		}
		sum=sum+stu[i];
		count++;
	}
		avg=sum/count;
		printf("max%d\n min%d\n sum%d\n avg%d\n",max,min,sum,avg);
	return 0;
}
	
