#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int i;
	int a;
	int b;
	printf("가격:");
	scanf("%d",&i);
	a = rand()%99+1;
	printf("축하합니다 %d %% 할인 쿠폰에 당첨되셨습니다.\n",a);
	int j=i*(a*0.01);
	int c=i-j;
	
	b=c / 10*10;
	int k=b/10;
	b=b+k;
	printf("%d - %d = %d + %d =%d\n",i,j,c,k,b);
}
