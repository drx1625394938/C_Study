#define _CRT_SECURE_NO_WARNINGS 1
//int main() 
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++) 
//	{
//		*(p++) = i;
//	}
//	return 0;
//
//}
#include<stdio.h>
int* test() 
{
	int a = 10;
	printf("%p\n", &a);
	return &a;
}
int main() 
{
	int a=0;
	printf("%d", a);
	int* p=test();
	*p = 20;
	printf("%p\n", p);
	printf("%d\n", *p);
}