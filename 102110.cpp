#include<stdio.h>

int main( )
{
	double num1;
	double num2;
	double num3;
	double num4;
	double num5;
	
	scanf("%lf %lf %lf %lf %lf",&num1,&num2,&num3,&num4,&num5);
	
	if(num1>num2 &&num1>num3&&num1>num4 &&num1>num5)
	{
		printf("%lf啊 力老 女聪促.",num1);
	}
	else if(num2>num1 &&num2>num3&&num2>num4 &&num2>num5)
	{
		printf("%lf啊 力老 女聪促.",num2);
	}
	else if(num3>num1 &&num3>num2&&num3>num4 &&num3>num5)
	{
		printf("%lf啊 力老 女聪促.",num3); 
	}
	else if(num4>num2 &&num4>num3&&num4>num1 &&num4>num5)
	{
		printf("%lf啊 力老 女聪促.",num4);
	 
	}
	else if(num5>num2 &&num5>num3&&num5>num4 &&num5>num1)
	{
		printf("%lf啊 力老 女聪促.",num5);
	 
	}
 } 
