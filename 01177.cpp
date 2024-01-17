#include<stdio.h>
int main()
{
	int h;
	int m;
	int a;
	scanf("%d %d %d",&h,&m,&a);
	m=m+a;

//	while(m<60&&h<24);
		if(m>=60)
	{
		h+=m/60;
		m=m%60; 
		
	}
	
		if(h>=24)
	{
		h=h-24;
	}
		printf("%d %d",h,m);
}
