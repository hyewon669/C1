#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int i=0;
	int n=0;
	
	scanf("%d %d",&a,&b);
	scanf("\n %d",&c);
	if(0<=a<=1000&&0<=b<=59&&0<=c<=1000)
	{
		i=a;
		n=b+c;
		while(n>59)
		{
			if(n>59)
			{
				i=i+1;
				n=n-60;
			}	
		}
		if(i>=24)
		{
			i=i-24;
		}
		printf("%d %d",i,n);
	}
}
