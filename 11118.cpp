#include<stdio.h>
int main()
{
	int n;
	int i = 1;
	
	scanf("%d",&n);
	while(1)
	{
		while(i<=n)
		{
			printf("%d",i);
			i++;
		}
		i = 1;
	}
	
}
