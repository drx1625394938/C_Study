#define _CRT_SECURE_NO_WARNINGS 1
#define MaxSize 100
#define DefaultSize 10
#include<stdlib.h>
//struct SqList 
//{
//	int data[MaxSize];//����
//	int length;//��ǰ˳�����
//};
//
//void InitSqList(SqList* sqlist) 
//{
//	sqlist->length = 0;
//}
//
//void AddSqList(SqList* sqlist,int index,int element) 
//{
//	//�ж������Ƿ�Ϸ�
//	//��
//	sqlist->data[sqlist->length] = element;
//	sqlist->length++;
//}
//
//void InsertSqList(SqList* sqlist, int index, int element)
//{
//	//�ж������Ƿ�Ϸ�
//	//��ĩβ��ʼ�����λ
//	for (int i = sqlist->length; i >= index; i--) 
//	{
//		sqlist->data[i] = sqlist->data[i-1];
//	}
//	//������ֵ�ŵ�λ��Ϊindex��������
//	sqlist->data[index - 1] = element;
//	sqlist->length++;
//
//}
////��λ����
//int FindSqListByByte(SqList sqlist, int index)
//{
//	/*for (int i = 0; i < sqlist.length; i++) 
//	{
//	if()
//	}*/
//	return sqlist.data[index - 1];
//}
//
////��ֵ����
//int FindSqlByValue(SqList sqlist, int value) 
//{
//	for (int i = 0; i < sqlist.length; i++)
//	{
//		if (sqlist.length == value)
//			return i + 1;//����λ��
//	}
//
//	return 0;//û�ҵ�
//}
////��̬˳���
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
//	//���ˣ�����
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











//������
typedef struct LNode 
{
	int data;// ������
	LNode* next;//ָ����
}LNode,*LinkList;

LinkList createLinkList() 
{
	LinkList L = (LinkList)malloc(sizeof(LNode));
	//��ͷ���
	L->next = NULL;

	//����ͷ���
	//L = NULL;
	return L;
}
//��ͷ���İ�λ�����
int InsertList(LinkList L,int index,int element) 
{
	if (index< 1) return 0;
	int i= 0;//��ǰָ��ڼ�����㣬ͷ���Ϊ0
	LNode* p = L;//��¼ͷ����λ��
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

//ǰ����
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

//ɾ����i�����
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

//ɾ��ָ�����
int ListDelete(LNode* L) 
{
	if (L != NULL && L->next == NULL) free(L);
	L->data = L->next->data;
	L->next = L->next->next;
	free(L->next);
	
}

//��λ����
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