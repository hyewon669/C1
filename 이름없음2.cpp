#include<stdio.h>
int main()
{
	int n;
	int a;
	int b;
	
	printf("자연수 한개:");
	scanf("%d",&n);
	printf("자연수 두개:");
	scanf("%d %d",&a,&b);
	if(n%a==0&&n%b==0)
	{
		printf("1");
	
	 
	}
	else
	{
		printf("0");
	 } 
}
