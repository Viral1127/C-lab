#include <stdio.h>
int main()
{
	int i,j,n,count=1;
	char a='a';
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			
			(i%2==0)?(printf("%c",a),a++):(printf("%d",count),count++);
		}
		printf("\n");
	}
	return 0;
}