#include<stdio.h>
int main()
{
    int n,sum=0,choice=1,count=0;
    printf("enter number");
    while(choice==1)
    {
        scanf("%d",&n);
        sum=sum+n;
        count++;
        printf("To countinue press 1");
        scanf("%d",&choice);
    }
    printf("sum is%d\n",sum);
    float avg;
    avg=sum/count;
    printf("avg is%f\n",avg);
    return 0;
}