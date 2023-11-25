#include<stdio.h>
int Sum(int n);
int main()
{
	int re;
	re=Sum(10);
	printf("re = %d\n",re);
}
int Sum(int n)
{
	int i,sum;
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
