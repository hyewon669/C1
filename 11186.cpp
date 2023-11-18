#include<stdio.h>
int main()
{
	int i;
	int j;
	int sum;
	while(i<=10)
	{
		j=1;
		
		while(j<=i)
		{
			printf("%d",j);
			sum=sum+j;
			j++;
		}
		printf(" °è»ê : %d",sum);
		printf("\n");
		i++;
	}
	printf("%d",sum);
}
