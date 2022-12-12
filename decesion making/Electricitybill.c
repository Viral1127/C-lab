#include<stdio.h>
int main()
{
    int unit;
    float amt,tax,totalbill;
    printf("enter unit");
    scanf("%d",&unit);
    if(unit<=50)
    {
        amt=0.50*unit;
    }
    else if(unit<=150)
    {
        amt=25+(unit-50)*0.75;
    }
    else if(unit<=250)
    {
        amt=100+(unit-150)*1.20;
    }
    else
    {
        amt=220+(unit-250)*1.50;
    }
    tax=amt*0.2;
    totalbill=amt+tax;
    printf("total electricity bill is%f",totalbill);
    return 0;
}
