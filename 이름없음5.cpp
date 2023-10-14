#include <stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	
	a-= b;
	printf("a = %d\n",a);
	a*=2;
	printf("a = %d\n",a);
	--a;
	printf("a = %d\n",a);
	a-=14;
	printf("a = %d\n",a);
	a+=2;
	printf("a = %d\n",a);
	++a;
	printf("a = %d\n",a);
	a/=2;
	printf("a = %d\n",a);
}
