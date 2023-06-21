#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() 
{
	char a[1000] = { };
	a[0] = '200';
	printf("%d", strlen(a));
	return 0;
}