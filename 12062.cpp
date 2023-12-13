#include<stdio.h>
int main()
{
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int br[10];
	for (int i=1;i<=9;i+=2)
	{

		
			printf("%d ",ar[i]);
		
		
	}	
	printf("\n");
	for (int i=0;i<=9;i++)
	{
		br[i]=ar[i];
		printf("%d ",br[i]);
	}	
	
}
