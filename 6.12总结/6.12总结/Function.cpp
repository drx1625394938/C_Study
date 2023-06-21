#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void OutPut(int num) 
{
	if (num <= 9)
		printf("%d", num);
	else
		OutPut(num / 10);
}
int main() 
{
	int num = 0;
	scanf("%d", &num);
	OutPut(num);
	return 0;
}