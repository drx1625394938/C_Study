#include<String.h>
#include<stdio.h>
//比较两数最大值
int compare(int x, int y) 
{
	if (x > y)
		return x;
	else
		return y;
}
//交换两数
void swag(int* x, int* y) 
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}
//写一个函数来判断一个数是否是素数
#include<math.h>
int i = 0;
void prime_num(int num) 
{
	for (i = 2; i <= sqrt(num); i++)	
	{
		if (num % i == 0) 
		{
			printf("不是素数\n");
			break;
		}
	}
	if (i > sqrt(num)) 
	{
	printf("是素数\n");
	}
}
//写一个函数判断是不是闰年,是返回1，不是返回0
int Leap_Year(int year) 
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
//写一个函数，实现有序数组二分查找
int  Binary_Search(int arr[],int value,int sz)
{
	int left = 0;
	int right = sz - 1;//最后一个元素下标为数组长度-1
	int mid;
	while (right>=left)
	{
		 mid = (left + right) / 2;
		if (value > arr[mid]) 
		{
			left = mid+1 ;
		}
		else if(value < arr[mid]) 
		{
			right = mid-1;
		}
		else if(value==arr[mid])
		{
			return mid;
		}
	}
		return -1;
}
#include"Add.h"
int main() 
{
	int a = 20;
	int b = 10;
	//printf("a=%d b=%d\n", a, b);
	swag(&a, &b);
	//printf("a=%d b=%d\n", a, b);
	//prime_num(a);
	int year = 2023;
	Leap_Year(year);
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", Binary_Search(arr, 8,sz));
	int c=Add(a, b);
	printf("%d", c);
	return 0;
}