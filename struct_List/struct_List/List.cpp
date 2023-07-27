#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int Biniary_Search(int a[], int num)
{
	int sz = sizeof(a) / sizeof(a[0]);
	int left = 0;
	int right = sz - 1;
	int mid=0;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (num > a[mid])
		{
			left = mid + 1;
		}
		if (num < a[mid]) right = mid - 1;
		else return mid;
	}
	return 0;
}
int main() 
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	int p=Biniary_Search(a, 5);
	printf("%d\n", p);
}