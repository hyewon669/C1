#include<stdio.h>
int main()
{
	int a;
	for(int i=1; i<=1000;i++)
	{
		
		if(i%3==0)
		{
			printf("%d ",i*-1);
			a=a-i;
		}
		else
		{
			printf("%d ",i);
			a=a+i;
			
		}
		
	
		
	}
	printf("%d",a);
}
