#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main() 
{
	char arr[20] = {};
	system("shutdown -s -t 60");
	printf("����һ����֮������������");
	again:
	scanf("%c", &arr);
	if (arr == "������") 
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
	}

}