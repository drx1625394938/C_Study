#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string>;
#include<errno.h>;
//int main() 
//{
//	//向内存申请10个整型的空间
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
////当动态内存空间不用后，需要释放空间
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
//	//释放动态内存
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
//	//当二十个字节不够用时，需要用40字节，需要用realloc来修改
//	int* p3=(int*)realloc(p2, 40);
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d ", *(p3 + i));
//	}
//
//	//realloc函数使用事项
//	//1.动态内存后有足够空间追加，直接追加，返回旧地址
//	//2.不足够追加，会开辟新的空间，大小为追加后的大小，返回新地址
//	//3.得用一个新变量来接受realloc函数返回值，成功再用原来的指针接收
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
	//动态内存使用常见错误
	//1.对空指针进行引用
	//2.越界访问
	//3.对非动态内存空间的free释放
	//4.使用free，释放动态内存的一部分，必须从动态内存的头开始释放
	//5.对同一块动态内存多次free释放  释放完后将指针置空时非常有必要的
	//6.动态开辟内存却不释放，容易造成内存泄漏

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//传址
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