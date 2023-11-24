#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	scanf("%d %d",&a,&b);
	c=b/100;
	d=b%100/10;
	e=b%10;
	printf(" %d\n %d\n %d\n %d\n",a*e,a*d,a*c,a*b);
}
