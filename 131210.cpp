#include<stdio.h>
int main()
{
	char word[20];
	printf("소문자 단어를 입력해주세요:");
	scanf("%s",&word);
	for(int i=0;i<word[i];i++)
	{
		word[i]=word[i]-32;
	}
	printf("%s",word);
	
}
