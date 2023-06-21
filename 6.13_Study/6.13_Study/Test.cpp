#define _CRT_SECURE_NO_WARNINGS 1
//将数组按照升序排序
#include<stdio.h>
void Bub_sort(int arr[],int sz) 
{
	for (int i = 0; i < sz-1; i++) 
	{
		int flag = 1;//假设是有序的
		for (int j = 0; j< sz-i-1; j++) 
		{
			if (arr[j + 1] < arr[j]) 
			{
				int res;
				res = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = res;
				flag = 0;//一旦交换了，就说明不完全有序
			}
		}
		if (flag == 1) 
		{
			break;
		}
	}
}
int main() 
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	Bub_sort(arr, sz);
	for (int i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}