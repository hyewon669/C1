#include<stdio.h>
#include<string.h>
struct Address
 {
 	char name[10];
 	char phon[20];
 	char home[50];
 };
 int main()
 {
 	struct Address m1;
 	strcpy(m1.name,"�̻���");
 	strcpy(m1.phon,"010-8282-8282");
	strcpy(m1.home,"�ܵ�����"); 
 	printf("%s %s %s",m1.name,m1.phon,m1.home); 
 }
