#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b!=c)
	{
		printf("triangle is scalene");
	}
	else if(a=b!=c)
	{
		printf("triangle is isoseles");
	}
	else if(a=c!=b)
	{
		printf("triangle is isoseles");
	}
	else if(b=c!=a)
	{
		printf("triangle is isoseles");
	}
	else
	{
		printf("triangle is equilateral");
	}
	return 0;
}
