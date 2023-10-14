#include<stdio.h>
int main()
{
	int a=47;
	int b=5;
	int c=1;
	a=a+b;
	a=a+c;
	a=a+b;
	a=a-c;
	a=a-c;
	a=a-b;
	printf("%d",a);
}
