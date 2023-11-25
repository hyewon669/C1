#include<stdio.h>
int DigitNumber(int n)
{
	int a,b;
	int c,d;
	a=n/1000;
	b=n%1000/100;
	c=n%1000%100/10;
	d=n%10;
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	return n;
	
}
int main(){
	int re;
	re=DigitNumber(5732);
}
