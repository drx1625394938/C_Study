#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
typedef struct LNode 
{
	int data;
	LNode* pior;//ǰ��ָ��
	LNode* next;//���ָ��
}LNode,*DLinkList;

//����
DLinkList CreateDList() 
{
	LNode* p = (LNode*)malloc(sizeof(LNode));
	if (p == NULL)return NULL;
	else return p;
}
//����
DLinkList InsertDList(DLinkList DList,int i,int element) 
{
	if (i < 1)return NULL;
	LNode* p = DList;//ͷ���
	int j = 0;//��ǰ�ǵڼ������
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
//��������ͷ�巨
DLinkList HeadInsert(DLinkList L,int element) 
{
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)return NULL;
	s->data = element;
	s->next = L->next;
	L->next = s;
}

//β�巨
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