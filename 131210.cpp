#include<stdio.h>
int main()
{
	char word[20];
	printf("�ҹ��� �ܾ �Է����ּ���:");
	scanf("%s",&word);
	for(int i=0;i<word[i];i++)
	{
		word[i]=word[i]-32;
	}
	printf("%s",word);
	
}
