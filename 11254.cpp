#include<stdio.h>
int Bignum(int num1,int num2)
{
	if (num1>num2){
		return num1;
	}
	else{
		return num2;
	}
}
int main(){
	int result;
	
	result = Bignum(5,3);
	printf("%d\n",result);
	result= Bignum(1,8);
	printf("%d\n",result); 
}
