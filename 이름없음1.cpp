#include<stdio.h>
#include<stdlib.h>

int main()
{
	int h;
	int hs=0; 
	int r;
	int rs=0;
	int a;
	int i=0;
	while(i<5)
	{
		
		
		printf("���� ������ �����ϼ���:");
		scanf("%d",&h);
		r=rand()%7;
		printf("\n��ǻ���� ����:%d\n",r);
		a=rand()%6+1;
		printf("�ֻ���:%d\n",a);
		if(a==h)
		{
			printf("����� ���߾����ϴ�.\n");
			hs=hs+1;
			
		}
		else if(a==r)
		{
			printf("�κ��� ���߾����ϴ�. \n");
			rs=rs+1;
		 }
		 else
		 {
		 	printf("�Ѵ� ������ ���߽��ϴ�.\n");
		 }
		 printf("���� ���ھ� \n ��  ���ھ� : %d \n �κ� ���ھ� : %d \n",hs,rs);
		i=i+1;
		
	}
	if(hs>rs)
	{
		printf("����� �̰���ϴ�.");
	}
	else
	{
		printf("�κ��� �̰���ϴ�.");
	}
	
}
