#define _CRT_SECURE_NO_WARNINGS 1
#define MaxSize 100
#define DefaultSize 10
#include<stdlib.h>
//struct SqList 
//{
//	int data[MaxSize];//数据
//	int length;//当前顺序表长度
//};
//
//void InitSqList(SqList* sqlist) 
//{
//	sqlist->length = 0;
//}
//
//void AddSqList(SqList* sqlist,int index,int element) 
//{
//	//判断输入是否合法
//	//是
//	sqlist->data[sqlist->length] = element;
//	sqlist->length++;
//}
//
//void InsertSqList(SqList* sqlist, int index, int element)
//{
//	//判断输入是否合法
//	//从末尾开始向后移位
//	for (int i = sqlist->length; i >= index; i--) 
//	{
//		sqlist->data[i] = sqlist->data[i-1];
//	}
//	//将插入值放到位序为index的数组中
//	sqlist->data[index - 1] = element;
//	sqlist->length++;
//
//}
////按位查找
//int FindSqListByByte(SqList sqlist, int index)
//{
//	/*for (int i = 0; i < sqlist.length; i++) 
//	{
//	if()
//	}*/
//	return sqlist.data[index - 1];
//}
//
////按值查找
//int FindSqlByValue(SqList sqlist, int value) 
//{
//	for (int i = 0; i < sqlist.length; i++)
//	{
//		if (sqlist.length == value)
//			return i + 1;//返回位序
//	}
//
//	return 0;//没找到
//}
////动态顺序表
//typedef struct 
//{
//	int* data;
//	int length;
//	int capacity;
//}List;
//
//void InitList(List* list) 
//{
//	int* p_data = (int*)malloc(sizeof(list->data));
//	list->length = 0;
//	list->capacity = 1;
//}
//void InsertList(List* list, int index, int element) 
//{
//	//满了，扩容
//	if (list->length == list->capacity) 
//	{
//		int* p = (int*)malloc((list->capacity + 1) * sizeof(list->data));
//		free(list->data);
//		list->data = p;
//		for (int i = list->length; i >= index; i--) 
//		{
//			list->data[i] = list->data[i - 1];
//		}
//
//	}
//}
//
//int main() 
//{
//	SqList sqlist;
//	
//}

typedef struct LNode 
{
	int data;
	LNode* next;
}LNode,*LinkList;

//LNode* CreatrLinkList() 
//{
//	LNode* p =(LNode*) malloc(sizeof(LNode));
//	return p;
//}
//LinkList createList()
//{
//	LinkList L =(LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	return L;
//}
//
//void InitList(LinkList list) 
//{
//	list == NULL;
//}
//int main() 
//{
//	LinkList List = createList();
//}











//链表结点
typedef struct LNode 
{
	int data;// 数据域
	LNode* next;//指针域
}LNode,*LinkList;

LinkList createLinkList() 
{
	LinkList L = (LinkList)malloc(sizeof(LNode));
	//带头结点
	L->next = NULL;

	//不带头结点
	//L = NULL;
	return L;
}
//带头结点的按位序插入
int InsertList(LinkList L,int index,int element) 
{
	if (index< 1) return 0;
	int i= 0;//当前指向第几个结点，头结点为0
	LNode* p = L;//记录头结点的位置
	while (p != NULL && i < index - 1) 
	{
		i++;
		p = p->next;
	}
	if(p==NULL) return 0;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = element;
	s->next = p->next;
	p->next = s;
	return 1;
}

//前插结点
int BeforeInsert(LNode* L,int element) 
{
	if (L == NULL) return 0;
	LNode* s = (LNode*)malloc(sizeof(sizeof(LNode)));
	if (s == NULL)return 0;
	s->next = L->next;
	L->next = s;
	s->data = L->data;
	L->data = element;
	return 1;
}

//删除第i个结点
int ListDelete(LinkList L,int index) 
{
	if (index < 1)return 0;
	LNode* p = L;
	int j = 0;
	while (p != NULL && j < index - 1) 
	{
		p = p->next;
		j++;
	}
	if (p == NULL)return 0;
	if (p->next == NULL) return 0;
	p->next = p->next->next;
	free(p->next);
	return 1;
}

//删除指定结点
int ListDelete(LNode* L) 
{
	if (L != NULL && L->next == NULL) free(L);
	L->data = L->next->data;
	L->next = L->next->next;
	free(L->next);
	
}

//按位查找
LNode* Find(LinkList L, int i) 
{
	if (i < 1)return NULL;
	LNode* p = L;
	int j = 0;
	while (p != NULL && j < i) 
	{
		p = p->next;
		j++;
	}
	return p;
}
int main() 
{

}