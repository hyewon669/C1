#include<stdio.h>
int main()
{
	int* ptr;
	int x;
	
	x=10;
	ptr = &x;
	printf("x의 값=%d\n",x);
	printf("ptr의 값= %d",*ptr);
}
