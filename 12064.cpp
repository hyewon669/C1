#include<stdio.h>
int main()
{
	int num[5]={1};
	
	
	for(int i=2;i <=10;i+=2)
	{
		num[i]=i;
		printf("%d ",num[i]);
	}
}
