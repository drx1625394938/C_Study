#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string>;
#include<errno.h>;
//int main() 
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	for (int i = 0; i < 10; i++) 
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d", *(p + i));
//	}
////����̬�ڴ�ռ䲻�ú���Ҫ�ͷſռ�
//	free(p);
//	p = NULL;
//
//
//	int* p1=(int*)calloc(10, sizeof(int));
//	if (p1 == NULL) 
//	{
//		printf("%s ", strerror(errno));
//	}
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d ", *(p1 + i));
//	}
//	//�ͷŶ�̬�ڴ�
//	free(p1);
//	p1 = NULL;
//
//	int* p2=(int*)malloc(5 * sizeof(int));
//	if (p2 == NULL) 
//	{
//		printf("%s ", strerror(errno));
//	}
//	for (int i = 0; i < 5; i++) 
//	{
//		*(p2 + i) = i;
//	}
//	//����ʮ���ֽڲ�����ʱ����Ҫ��40�ֽڣ���Ҫ��realloc���޸�
//	int* p3=(int*)realloc(p2, 40);
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d ", *(p3 + i));
//	}
//
//	//realloc����ʹ������
//	//1.��̬�ڴ�����㹻�ռ�׷�ӣ�ֱ��׷�ӣ����ؾɵ�ַ
//	//2.���㹻׷�ӣ��Ὺ���µĿռ䣬��СΪ׷�Ӻ�Ĵ�С�������µ�ַ
//	//3.����һ���±���������realloc��������ֵ���ɹ�����ԭ����ָ�����
//	int *ptr=(int*)realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	else
//		printf(strerror(errno));
//
//	free(p);
//	return 0;

//}
	//��̬�ڴ�ʹ�ó�������
	//1.�Կ�ָ���������
	//2.Խ�����
	//3.�ԷǶ�̬�ڴ�ռ��free�ͷ�
	//4.ʹ��free���ͷŶ�̬�ڴ��һ���֣�����Ӷ�̬�ڴ��ͷ��ʼ�ͷ�
	//5.��ͬһ�鶯̬�ڴ���free�ͷ�  �ͷ����ָ���ÿ�ʱ�ǳ��б�Ҫ��
	//6.��̬�����ڴ�ȴ���ͷţ���������ڴ�й©

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//��ַ
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main() 
//{
//	Test();
//
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	printf("%p\n", p);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf("%p\n",str);
//}
//int main() 
//{
//	Test();
//}

int main() 
{
	int* p = (int*)malloc(100);
	free(p);
	printf("%p", p);
}