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

//线索化
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

//找中序线索二叉树的首个结点
ThreadNode* FirsrNode(ThreadTree p) 
{
	while (p->ltag==0) 
	{
		p = p->lchild;
	}
	return p;
}

//找中序线索二叉树某节点的后继结点
ThreadNode* NextNode(ThreadNode* p) 
{
	if (p->rtag == 1)return p->rchild;
	else return FirsrNode(p->rchild);
}

//找中序二叉树的最后一个结点
ThreadNode*  LastNode(ThreadTree p) 
{
	while (p->rchild == 0)p->rchild;
	return p;
}

//找中序线索二叉树某节点的前驱结点
ThreadNode* preNode(ThreadNode* p) 
{
	if (p->ltag == 1)return p->lchild;
	else return LastNode(p);

}

//把最后一个结点的后继线索结点置空
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