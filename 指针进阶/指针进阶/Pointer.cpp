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
//		printf("hhehe\n");//������������Ϊ����������Ԫ�ص�ַ����������ĵ�ַ����ͬ
//	}
//	else 
//	{
//		printf("haha\n");
//	}
//	if (parr3 ==parr4)
//	{
//		printf("hehe\n");//�����hehe������abcdefd�ǳ����ַ�����
//		//Ϊ�˽�ʡ�ռ䣬����ָ��ָ�����ͬһ��ַ��������ָ�뱾��ĵ�ַ��ͬ,��&parr3!=&parr4
//	}
//	else
//		printf("haha\n");
//	return 0;
//}
//
//����ָ������
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

////����ָ��
//int main() 
//{
//	int* pi = NULL;//����ָ�룺ָ�����͵�ָ��-������͵ĵ�ַ
//	char* pc = NULL;//�ַ�ָ�룺ָ���ַ���ָ��-����ַ��ĵ�ַ
//	//����ָ�룺ָ�������ָ��-�������ĵ�ַ
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int(*parr)[9] = &arr;
//}

int main() 
{
	//����
	char arr1[] = "abcde";
	char arr2[] = "bcdef";
	char arr3[] = "defgh";
	//����ָ��
	char(*parr)[6] = &arr1;
	//ָ������
	char* parr1[3] = { arr1,arr2,arr3 };
	char* parr2[] = { arr2,arr1,arr3 };
	char* parr3[] = { arr3,arr1,arr2 };
	//ָ������ָ��
	//char* (*(p_parr1[3])) = &parr1;
	char* arr[5];
	char* (*pa)[5] = &arr;
	return 0;
}
