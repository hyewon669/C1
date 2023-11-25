#include<stdio.h>
int ShowSum(int a,int b)
{
	int c,s;
	int sum;
	int ssum;
	if(a>b)
	{
		s=a;
		a=b;
		b=c;
	}
	
	sum=0;
	for (s=a; s<=b; s++)
	{
		printf("%d",s);
		sum+= s;
		
	}
	printf(" %d",sum);
	return sum;
}
int main()
{
	int re;
	re=ShowSum(1,5);
}
