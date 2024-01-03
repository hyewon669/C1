#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ar[6][6] = {0};
	int i,j;
	int sum;
	int a=0;
	int b,c; 
	
	srand(time(NULL));
	scanf("%d",&sum);
	for(i =0; i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			ar[i][j]=rand()%99+1;
		}
	}
	i=0;
	while(i<6)
	{
		j=0;
		while(j<6)
		{
			printf("%3d",ar[i][j]);
			//sum=sum+ar[i][j];
			if(ar[i][j]==sum)
			{
				sum=ar[i][j];
				a=1;
				b=i;
				c=j;
			}
			j++;
		}
		printf("\n");
		i++;
	}
	if(a==1)
	{
		printf("%d가 배열에 있습니다. %d행 %d열에 있습니다.",sum,b,c);
	}
	else
	{
		printf("없습니다.");
	}
	return 0;
}
