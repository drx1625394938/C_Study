#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
typedef struct QNode 
{
	int data;
	QNode* next;
}QNode;

typedef struct 
{
	QNode* rear;
	QNode* front;
}LinkQueue;

LinkQueue InitLinkQueue(LinkQueue &lq) 
{
	lq.front = lq.rear = (QNode*)malloc(sizeof(QNode));
	lq.front->next = NULL;
	return lq;
}

bool Is_empty(LinkQueue lq) 
{
	if (lq.front == lq.rear)return true;
	else return false;
}

bool EnQueue(LinkQueue &lq,int element) 
{
	QNode* p = (QNode*)malloc(sizeof(QNode));
	if (p == NULL)return false;
	p->data = element;
	p->next = lq.rear->next;
	lq.rear->next = p;
	lq.rear = p;
	return true;
}
bool DeQueue(LinkQueue& lq, int &x) 
{
	if (lq.front == lq.rear)return false;
	QNode* s = lq.front->next;
	x = s->data;
	lq.front->next = s->next;
	if (lq.rear == s)
		lq.front == lq.rear == 0;
	free(s);
	return true;
}

int main() 
{
	LinkQueue lq;
	return 0;
}