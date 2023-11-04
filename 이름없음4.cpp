#include<stdio.h>
int main()
{
	int sum=0;
	int min=100;
	int input;
	
	for(int i=1;i<=4;i++)
	{
		scanf("%d",&input);
		if(input%2==1)
		{
			sum=sum+input;
			if(input<min)
			{
				min=input;
			}
		}

	}
	
	if(sum==0)
	{
		printf("-1 \n");
	}
	printf("%d,%d",sum,min);
}
