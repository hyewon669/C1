#include<stdio.h>
struct Circle
{
	double area;
	double length;
	double r;
};
int main()
{
	struct Circle c;
	c.r=10;
	c.area=c.r*c.r*3.14;
	c.length=c.r*2*3.14;
	printf("원의 넓이 %lf\n원의 둘레 %lf",c.area,c.length);
}
