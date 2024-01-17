#include<stdio.h>
int main()
{
	int n;
	int a=0;
	int i=0;
	int j=0;
	int k=0;
	int ar[100] = { };
	int ar2 = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	

	printf(";;;;;");

	
	for(j=0;j<n;j++)
	{
		scanf("%d",&ar2);
	}
	
	for(k;k<n;k++)
	{
		if(ar[k]==ar2)
		{
			a=a+1;
		}
	}
	printf("%d",a);
}
