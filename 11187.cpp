#include<stdio.h>
int main()
{
	int i=1;
	int j;
	while(i<=100)
	{
		j=1;
		printf("%d:",i);
		while(j<=i)
		{
			
			if(i%j==0)
			{
				printf("%d ",j);
			}
			j++;
		}
		printf("\n");
		i++;
	}
 } 
