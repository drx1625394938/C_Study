#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main() 
{
	char arr[20] = {};
	system("shutdown -s -t 60");
	printf("请在一分钟之内输入我是猪");
	again:
	scanf("%c", &arr);
	if (arr == "我是猪") 
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
	}

}