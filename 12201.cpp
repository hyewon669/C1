#include<stdio.h>
int main()
{
	int* ptr;
	int x;
	
	x=10;
	ptr = &x;
	printf("x�� ��=%d\n",x);
	printf("ptr�� ��= %d",*ptr);
}
