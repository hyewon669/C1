#include<stdio.h>
int main()
{
	int i=0;
	int n;
	int a=1;
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d ",a);
		a=a*-1;
		i++;
	}
}
