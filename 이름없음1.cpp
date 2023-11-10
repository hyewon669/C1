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
		
		
		printf("몇이 나올지 예측하세요:");
		scanf("%d",&h);
		r=rand()%7;
		printf("\n컴퓨터의 예측:%d\n",r);
		a=rand()%6+1;
		printf("주사위:%d\n",a);
		if(a==h)
		{
			printf("당신이 맞추었습니다.\n");
			hs=hs+1;
			
		}
		else if(a==r)
		{
			printf("로봇이 맞추었습니다. \n");
			rs=rs+1;
		 }
		 else
		 {
		 	printf("둘다 맞추지 못했습니다.\n");
		 }
		 printf("현재 스코어 \n 내  스코어 : %d \n 로봇 스코어 : %d \n",hs,rs);
		i=i+1;
		
	}
	if(hs>rs)
	{
		printf("당신이 이겼습니다.");
	}
	else
	{
		printf("로봇이 이겼습니다.");
	}
	
}
