#include<stdio.h>
int main()
{
	int i,n,a;
	printf("enter value of n");
	scanf("%d",&n);
	a=0;
	for(i=1;i<=n;i++)
	{
		a=a+i;
	}
	printf("%d",a);
	return 0;
}
