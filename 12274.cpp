#include<stdio.h>
int main()
{
	int ar[3][4];
	int i, j;
	ar[0][0]=10;
	ar[2][3]=12;
	ar[0][1]=5;
	ar[2][0]=6;
	for(i=0;i<3;i++)
	{
		for(j = 0; j<4; j++)
		{
			printf("%7d ",ar[i][j]);
		}
		printf("\n");
	}
}
