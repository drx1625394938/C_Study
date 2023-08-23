#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
ThreadNode* pre;
typedef struct ThreadNode 
{
	int data;
	ThreadNode* lchild;
	ThreadNode* rchild;
	int ltag = 0;
	int rtag = 0;
}TreeNode,*ThreadTree;

//������
void Thread(ThreadTree &p,ThreadNode* &pre) 
{
	if (p != NULL) 
	{
		Thread(p->lchild,pre);
		if (p->lchild == NULL) 
		{
			p->ltag = 1;
			p->lchild = pre;
		}
		if (pre != NULL && pre->rchild == NULL) 
		{
			pre->rtag = 1;
			pre->rchild = p;
		}
		pre = p;
		Thread(p->rchild,pre);
	}
}

//�������������������׸����
ThreadNode* FirsrNode(ThreadTree p) 
{
	while (p->ltag==0) 
	{
		p = p->lchild;
	}
	return p;
}

//����������������ĳ�ڵ�ĺ�̽��
ThreadNode* NextNode(ThreadNode* p) 
{
	if (p->rtag == 1)return p->rchild;
	else return FirsrNode(p->rchild);
}

//����������������һ�����
ThreadNode*  LastNode(ThreadTree p) 
{
	while (p->rchild == 0)p->rchild;
	return p;
}

//����������������ĳ�ڵ��ǰ�����
ThreadNode* preNode(ThreadNode* p) 
{
	if (p->ltag == 1)return p->lchild;
	else return LastNode(p);

}

//�����һ�����ĺ����������ÿ�
int main() 
{
	ThreadTree p = (ThreadNode*)malloc(sizeof(ThreadNode));
	pre = NULL;
	if (p != NULL)
	{
		Thread(p, pre);
		pre->rtag = 1;
		pre->rchild = NULL;
	}

}