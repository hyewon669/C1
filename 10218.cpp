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
		 	printf("������ �������ϴ�.");
		 }
		else
		{
			printf("������ �������� �ʽ��ϴ�");
		 } 
	}
	else
	{
		if(num2%num1==0)
		{
			printf("������ �������ϴ�.");
		}
		else
		{
			printf("������ �������� �ʽ��ϴ�");
		 } 
	 } 
}
