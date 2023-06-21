#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a = 0;
	int b = 2;
	int c = 4;
	int d = (a++, b++, c++);
	printf("a=%d b=%d c=%d d=%d", a, b, c, d);

}