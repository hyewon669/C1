#include<stdio.h>

int main()
{
	int num1;
	int num2;
	
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		 if(num1%num2==0)
		 {
		 	printf("나누어 떨어집니다.");
		 }
		else
		{
			printf("나누어 떨어지지 않습니다");
		 } 
	}
	else
	{
		if(num2%num1==0)
		{
			printf("나누어 떨어집니다.");
		}
		else
		{
			printf("나누어 떨어지지 않습니다");
		 } 
	 } 
}
