#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int (*pa)[10] = &arr;
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d ",(*pa)[i]);
//	}*/
//
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d ", *(arr + i));
//	}
//}

//����ָ���ӡ��λ����
//void print1(int(*p)[5], int row, int col) 
//{
//	int i = 0;
//	for (i; i < row; i++) 
//	{
//		int j = 0;
//		for (j; j < col; j++) 
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main() 
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//}

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d ", *(p+i));
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));
//	}
//}

//��ά���鴫��(����)
//void test(int arr[3][5]) {}
//
//void test1(int arr[][5]) {}
//
///*void test2(int arr[][]) {}*///error
//
////��ά���鴫��(��ַ)
//
//void test3(int* arr) {}//error arr�Ƕ�ά������Ԫ�ص�ַ��Ҳ���ǵ�һ������ĵ�ַ���޷���Ž� int��ָ����
//
//void test4(int** arr) {}//ͬ��
//
//void test5(int(*arr)[5]){}
//int main() 
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	//test3(arr);//error
//
//	//test4(arr);//error
//
//	test5(arr);
//}

//int Add(int x, int y) 
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	int (*pa)(int, int) = Add;
//	printf("%d\n",(*pa)(a, b));
//}

//int main()
//{
//	(*(void(*)())0)();//void(*)()�Ǻ���ָ�����ͣ�����������ż�Ϊ��0ǿ��ת��Ϊ����ָ������
//	//ǰ������ú���Ӻ������÷�����Ϊ���õ�ַΪ0���ĺ���
//
//	void (*signal(int, void(*)(int)))(int);
//	//signal()�Ǻ����������β�������int���β�Ϊint������ֵΪvoid�ĺ���ָ��void(*)(int)�������ķ�������Ϊ
//	//void(*)(int);
//
//	typedef void(*p_fun)(int);
//	p_fun signal(int, p_fun);
//}
//int Add(int x, int y) 
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y) 
//{
//	return x * y;
//}
//int Div(int x, int y) 
//{
//	return x / y;
//}
//int main() 
//{
//	//����ָ������
//	int (*p_fun[4])(int,int) = { Add,Sub,Mul,Div };
//	//(*p_fun)(2, 3);
//	for (int i = 0; i < 4; i++) 
//	{
//		printf("%d ",p_fun[i](4, 2));
//		
//	}
//	printf("\n");
//	for (int i = 0; i < 4; i++) 
//	{
//		printf("%d ",(*(p_fun+i))(4, 2));
//	
//}
//char* my_strcpy(char* dest, const char* src) 
//{
//
//}
////дһ������ָ�룬��ָ��my_strcpy����
//char* (*pf)(char*, const char*);
////дһ������ָ�����飬�ܴ���ĸ�ָ��my_strcpy������ָ��
//char* (*pfArr[4])(char*,const char*);

//int add(int x, int y) 
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x-y;
//}
//int mul(int x, int y) 
//{
//	return x * y;
//}
//int div(int x, int y) 
//{
//	return x / y;
//}
//int main() 
//{
//		int x = 0;
//		int y = 0;
//		int input = 0;
//		printf("��ѡ����\n");
//		scanf("%d", &input);
//		printf("����������������");
//		scanf("%d%d", &x, &y);
//		int(*pfArr[5])(int, int) = {0,add,sub,mul,div};
//		printf("%d\n", pfArr[input](x,y));
//		return 0;
//}
//int Add(int x, int y) 
//{
//	return x + y;
//}
//int main() 
//{
//	//����ָ������
//	int (*(parr[4]))(int, int) = { Add,Add,Add,Add };
//	//ָ����ָ�������ָ��
//	int(*(*pparr)[4])(int,int) = &parr;
//}
#include<stdlib.h>
//int compare_int(const void* a,const void* b)
//{
//	return *((int*)a) - *((int*)b);
//}
//int main() 
//{
//	int arr[10] = { 1,3,5,6,7,4,1,23,10,8 };
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, 10, sizeof(arr[0]),compare_int);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}

int Add(int x, int y) 
{
	return x + y;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//ָ������
	int* arr[10];

	//����ָ��
	//int* (*parr)[10];

	// ����ָ��
	int(*p)(int, int) = Add;

	//����ָ������
	int(*parr[])(int, int) = { Add,Add };

	//ָ����ָ�������ָ��
	int(*(*pparr)[2])(int, int) = &parr;


}