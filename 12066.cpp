#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n=0;
	int sum=100;
	int index=0;
	int num[10];
	srand(time(NULL));
	
	for(int i=0;i<10;i++)
	{
		n = rand()%9+1;
		num[i]=n;
		printf("%d ",num[i]);
		if(n<sum)
		{
			sum=n;
		}
		if(num[i]==sum)
		{
			printf("index=%d ",num[i]);
		}
	}
	printf("\n%d %d",sum,index);
	
	
}
