#include<stdio.h>
int main()
{
	char ch;
	
	printf("���ڸ� �Է��ϼ���:");
	ch = getchar();
	if(ch<97)
	{
		printf("%c\n",ch+32);
	}
	else
	{
		printf("%c\n",ch-32);
	}
}
