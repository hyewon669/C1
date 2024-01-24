#include<stdio.h>
int main()
{
	int n;
	int i;
	int a=0;
	scanf("%d",&n);
	while(n>10)
	{
		
		a=a+n%10;
		
		n=n/10;
	}	
	a=a+n%10;
	printf("%d\n",a);
}
