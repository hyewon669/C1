#include<stdio.h>
int main()
{
	int n;
	int m;
	int i;
	int a;
	scanf("%d %d",&n,&m);
	while(i<m)
	{
		a=1;
		while(a<=n)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
		i++;
	}
}
