#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(int  &x) 
//{
//	x = 1024;
//	printf("�����ڲ�x��ֵΪ%d\n",x);
//}
//int main() 
//{
//	int x = 1;
//	printf("x��ʼֵ%d\n", x);
//	test(x);
//	printf("�������ú�x��ֵ%d\n", x);
//
//}
//typedef struct
//{
//	int num;//����
//	int people;//����
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

//˳���Ķ���

//typedef struct 
//{
//	int 
//}SeqList;
//int main() 
//{
//
//}

//ͨѶ¼(˳���)

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
//	int length;//����
//	int capacity;//����
//}Contain;
//int main()
//{
//
//}
//










#define MaxSize 10
////��̬�ֲ���˳���
//
////����һ���ṹ�壬�������ָ�ΪSqList
//typedef struct 
//{
//	int data[MaxSize];//������ݵ�����
//	int length;//���鳤��
//}SqList;
//
////˳����ʼ��
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
//	SqList sqlist;//����һ��˳���
//	InitList(&sqlist);
//
//	for (int i = 0; i < MaxSize; i++) 
//	{
//	printf("%d ",sqlist.data[i]);
//	}
//}




//��̬�ڴ����˳���
//����һ���ṹ�壬�������ָ�ΪSqList
#include<stdlib.h>
typedef struct 
{
	int* data;//������ݵ�����
	int length;//���鳤��
	int capacity;//����
}SqList;


#include<string.h>
//˳����ʼ��
void InitList(SqList* SqList) 
{
	//��̬���ٿռ�
	int* p = (int*)malloc(4 * sizeof(SqList->data));
	if (p == NULL) return;
	SqList->data = p;

	//��ʼ��
	memset(SqList->data, 0, 4 * sizeof(int));
	SqList->length = 0;
	SqList->capacity = 4;
}

#include<errno.h>
//����(��̬)
void InsertList(SqList* SqList, int index, int elem) 
{
	//�ж�index�Ƿ�Ϸ�����˳���δ��
		for (int i = SqList->length; i >= index; i--)
		{
			SqList->data[i] = SqList->data[i - 1];
		}
		SqList->data[index - 1] = elem;
		SqList->length++;

}

//��λ����
int FindList(SqList* SqList, int index) 
{
	//�ж������Ƿ�Ϸ�
	return SqList->data[index - 1]; 
}

//��ֵ����
int FindList(SqList* SqList, int index, int elem) 
{
	//�ж������Ƿ�Ϸ�
	for (int i = 0; i < SqList->length; i++) 
	{
		if (SqList->data[i]==elem)
			index = i+1;
		return index;//�ҵ��˷���λ��
	}
	return 0;//û�ҵ�
	
}
int main() 
{
	SqList sqlist;//����һ��˳���
	InitList(&sqlist);

	for (int i = 0; i < sqlist.length; i++) 
	{
	printf("%d ",sqlist.data[i]);
	}
}