#include<stdio.h>

int main()
{
	double num1;
	scanf("%lf",&num1);
	if(num1<0)
	{
		printf("%lf",num1*-1);
	}
	else
	{
		printf("%lf",num1);
	}
 } 
