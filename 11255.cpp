#include<stdio.h>
int Power(int n);
int main()
{
	int re;
	re=Power(5);
	printf("re=%d\n", re);
}
int Power(int n)
{
	return n*n;
}
