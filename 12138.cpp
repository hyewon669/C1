#include<stdio.h>
int main()
{
	char ch;
	
	printf("문자를 입력하세요:");
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
