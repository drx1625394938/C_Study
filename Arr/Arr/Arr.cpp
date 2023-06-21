#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Binary(int arr[],int n,int sz) 
{
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while (left <= right) 
	{
		mid = (left + right) / 2;
		if (arr[mid] > n)
		{
			//说明要找的在mid左边
			right = mid - 1;

		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return 0;
}
void Bub_Sort(int arr[], int sz) 
{
	for (int i = 0; i < sz - 1; i++) 
	{
		int flag = 1;//假设已经有序了
		for (int j = 0; j < sz - i - 1; j++) 
		{
			if (arr[j + 1] < arr[j]) 
			{
				int temp;
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				flag = 0;//一旦换位置了，说明该趟排序中，数组不完全有序
			}
		}
		if (flag == 1) 
		{
		//flag==1,说明数组已经有序了，不需要继续进行排序了
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n;
	scanf("%d", &n);
	printf("%d\n",Binary(arr, n, sz));
	int arr1[] = { 3,44,38,5,47,15,36,26,27,2,46,4,19,50,48 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	Bub_Sort(arr1, sz1);
	for (int i = 0; i < sz1; i++) 
	{
		printf("%d ", arr1[i]);
	}
	return 0;

}