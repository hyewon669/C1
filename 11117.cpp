#include<stdio.h>
int main()
{
	int i=1;
	int a;
	scanf("%d",&a);
	while(i<=a)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		else
		{
			printf("%d ",i*-1);
		}
		i++;
	}
}
