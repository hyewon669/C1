#include<stdio.h>
int main()
{
	int i=5;
	int j;
	while(i>=1)
	{
		j=i;
		while(j<=5)
		{
			printf("%2d",j);
			
			j++;
		}

		printf("\n");
		i--;
	}
}
