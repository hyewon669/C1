#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	n=n/10;
	switch(n)
	{
		case 0:
			printf("���ҳ�");
			break; 
		case 1:
			printf("û�ҳ�");
			break; 
			
		case 2:
			printf("û��");
			break; 
		case 3:
			printf("û��");
			break; 
		case 4:
			printf("�߳�");
			break; 
		case 5:
			printf("�߳�");
			break; 
		case 6:
			printf("���");
			break; 
		case 7:
			printf("���");
			break; 
		case 8:
			printf("���");
			break; 
		case 9:
			printf("���� �鼼");
			break; 
		default:
			printf("���� �鼼"); 
			break; 
	}
}
