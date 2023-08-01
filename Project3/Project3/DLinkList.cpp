#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
typedef struct LNode 
{
	int data;
	LNode* pior;//前驱指针
	LNode* next;//后继指针
}LNode,*DLinkList;

//创建
DLinkList CreateDList() 
{
	LNode* p = (LNode*)malloc(sizeof(LNode));
	if (p == NULL)return NULL;
	else return p;
}
//插入
DLinkList InsertDList(DLinkList DList,int i,int element) 
{
	if (i < 1)return NULL;
	LNode* p = DList;//头结点
	int j = 0;//当前是第几个结点
	while (p != NULL && j < i - 1) 
	{
		p = p->next;
		j++;
	}
	if (p == NULL)return NULL;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = element;
	s->next = p->next;
	p->next->pior = s;
	p->next = s;
	s->pior = p;
	return DList;
}
//给定结点的头插法
DLinkList HeadInsert(DLinkList L,int element) 
{
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)return NULL;
	s->data = element;
	s->next = L->next;
	L->next = s;
}

//尾插法
DLinkList TailInsert(DLinkList L, int element) 
{
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)return NULL;
	s->data = element;
	LNode* p= L;
	LNode* pre = L->next;
	while (p != NULL) 
	{
		pre = p;
		p = p->next;
	}
	s->next = pre->next;
	pre->next = s;
}
int main() 
{

}