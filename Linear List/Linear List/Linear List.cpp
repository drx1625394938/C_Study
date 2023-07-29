#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(int  &x) 
//{
//	x = 1024;
//	printf("函数内部x的值为%d\n",x);
//}
//int main() 
//{
//	int x = 1;
//	printf("x初始值%d\n", x);
//	test(x);
//	printf("函数调用后x的值%d\n", x);
//
//}
//typedef struct
//{
//	int num;//号码
//	int people;//人数
//}Customer;
//
//int main() 
//{
//	Customer c1;
//	c1.num = 1;
//	c1.people = 10;
//
//	printf("%d", c1.num);
//	return 0;
//}

//顺序表的定义

//typedef struct 
//{
//	int 
//}SeqList;
//int main() 
//{
//
//}

//通讯录(顺序表)

//typedef struct 
//{
//	char name[10];
//	int id_num;
//	int phone_num;
//	char address[10];
//}People;
//
//typedef struct 
//{
//	People people[100];
//	int length;//长度
//	int capacity;//容量
//}Contain;
//int main()
//{
//
//}
//










#define MaxSize 10
////静态分布的顺序表
//
////定义一个结构体，将其名字改为SqList
//typedef struct 
//{
//	int data[MaxSize];//存放数据的数据
//	int length;//数组长度
//}SqList;
//
////顺序表初始化
//void InitList(SqList* SqList) 
//{
//	for (int i = 0; i < MaxSize; i++) 
//	{
//		SqList->data[i] = 0;
//	}
//	SqList->length = 0;
//}
//int main() 
//{
//	SqList sqlist;//创建一个顺序表
//	InitList(&sqlist);
//
//	for (int i = 0; i < MaxSize; i++) 
//	{
//	printf("%d ",sqlist.data[i]);
//	}
//}




//动态内存分配顺序表
//定义一个结构体，将其名字改为SqList
#include<stdlib.h>
typedef struct 
{
	int* data;//存放数据的数据
	int length;//数组长度
	int capacity;//容量
}SqList;


#include<string.h>
//顺序表初始化
void InitList(SqList* SqList) 
{
	//动态开辟空间
	int* p = (int*)malloc(4 * sizeof(SqList->data));
	if (p == NULL) return;
	SqList->data = p;

	//初始化
	memset(SqList->data, 0, 4 * sizeof(int));
	SqList->length = 0;
	SqList->capacity = 4;
}

#include<errno.h>
//插入(静态)
void InsertList(SqList* SqList, int index, int elem) 
{
	//判断index是否合法，且顺序表未满
		for (int i = SqList->length; i >= index; i--)
		{
			SqList->data[i] = SqList->data[i - 1];
		}
		SqList->data[index - 1] = elem;
		SqList->length++;

}

//按位查找
int FindList(SqList* SqList, int index) 
{
	//判断输入是否合法
	return SqList->data[index - 1]; 
}

//按值查找
int FindList(SqList* SqList, int index, int elem) 
{
	//判断输入是否合法
	for (int i = 0; i < SqList->length; i++) 
	{
		if (SqList->data[i]==elem)
			index = i+1;
		return index;//找到了返回位序
	}
	return 0;//没找到
	
}
int main() 
{
	SqList sqlist;//创建一个顺序表
	InitList(&sqlist);

	for (int i = 0; i < sqlist.length; i++) 
	{
	printf("%d ",sqlist.data[i]);
	}
}