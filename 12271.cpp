#include<stdio.h>
int main(){
	int x;
	int* px;
	
	x=10;
	px = &x;
	printf("%p\n",px);
	printf("%d",*px);
}
