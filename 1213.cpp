#include<stdio.h>
int main()
{
	int num[]={5,2,6,7,8,9,4,3,1};
	int page[10]={123,57,67,86};
	int i,j;
	
	for(int i=0;i<9;i++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");
	for(int j=0;j<9;j++)
	{
		printf("%3d",page[j]);
	}
}
