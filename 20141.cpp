#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	int x, y;
	COORD pos = {45, 30};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("Hello C3coding");
	getch();
}
