#include<stdio.h>
int main()
{
	int i=1;
	int j;
	do
	{
		printf("%dÇÐ³â ",i);
		j=7;
		do
		{
			printf("%d¹Ý ",j);
			j--;
		}while(j>=1);
		printf("\n");
		i++;
	}while(i<=6);
}
