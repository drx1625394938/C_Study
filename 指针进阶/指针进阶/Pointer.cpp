#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() 
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdefg";
//	const char* parr3 = "abcdefg";
//	const char* parr4 = "abcdefg";
//	if(arr1==arr2)
//	{
//		printf("hhehe\n");//结果是这个，因为数组名是首元素地址，两个数组的地址不相同
//	}
//	else 
//	{
//		printf("haha\n");
//	}
//	if (parr3 ==parr4)
//	{
//		printf("hehe\n");//结果是hehe，由于abcdefd是常量字符串，
//		//为了节省空间，两个指针指向的是同一地址，但两个指针本身的地址不同,即&parr3!=&parr4
//	}
//	else
//		printf("haha\n");
//	return 0;
//}
//
//数组指针数组
//int main() 
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//	    {
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//
//	}
//}

////数组指针
//int main() 
//{
//	int* pi = NULL;//整型指针：指向整型的指针-存放整型的地址
//	char* pc = NULL;//字符指针：指向字符的指针-存放字符的地址
//	//数组指针：指向数组的指针-存放数组的地址
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int(*parr)[9] = &arr;
//}

int main() 
{
	//数组
	char arr1[] = "abcde";
	char arr2[] = "bcdef";
	char arr3[] = "defgh";
	//数组指针
	char(*parr)[6] = &arr1;
	//指针数组
	char* parr1[3] = { arr1,arr2,arr3 };
	char* parr2[] = { arr2,arr1,arr3 };
	char* parr3[] = { arr3,arr1,arr2 };
	//指针数组指针
	//char* (*(p_parr1[3])) = &parr1;
	char* arr[5];
	char* (*pa)[5] = &arr;
	return 0;
}
