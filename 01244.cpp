#include<stdio.h>
void Ccube();
void Coding();

int main()
{
	Ccube();
	Ccube();
	Ccube();
	Coding();
	Coding();
	Coding();	
}
void Ccube()
{
	int cnt = 0;
	cnt++;
	printf("%d 씨큐브\n",cnt);
	
}
void Coding()
{
	static int cnt = 0;
	cnt++;
	printf("%d코딩\n",cnt);
}
