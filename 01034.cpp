#include<stdio.h>
int main()
{
	int ar[] = {11,21,31,41,51,61,71};
	int *p;
	p=ar;
	for(int i=0;i<sizeof(ar)/sizeof(ar[0]);i++)
	{
		printf("%d ",*(ar + i));
	}
}
