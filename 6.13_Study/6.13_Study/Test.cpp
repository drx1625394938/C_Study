#define _CRT_SECURE_NO_WARNINGS 1
//�����鰴����������
#include<stdio.h>
void Bub_sort(int arr[],int sz) 
{
	for (int i = 0; i < sz-1; i++) 
	{
		int flag = 1;//�����������
		for (int j = 0; j< sz-i-1; j++) 
		{
			if (arr[j + 1] < arr[j]) 
			{
				int res;
				res = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = res;
				flag = 0;//һ�������ˣ���˵������ȫ����
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