#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
ThreadNode*  pre;
typedef struct ThreadNode 
{
	int data;
	ThreadNode* lchild;
	ThreadNode* rchild;
	int ltag = 0;
	int rtag = 0;

	
}TreeNode,*BitTree;

//�������
void PreOrder(BitTree bitTree) 
{
	if (bitTree!= NULL) 
	{
		
		PreOrder(bitTree->lchild);
		PreOrder(bitTree->rchild);
	}
}
//�������
void InOrder(BitTree bitTree) 
{
	if (bitTree != NULL) 
	{
		InOrder(bitTree->lchild);
		Visit(bitTree,pre);
		InOrder(bitTree->rchild);
	}
}
void Visit(BitTree &p,ThreadNode* &pre) 
{
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

}
int main() 
{
	BitTree t = (ThreadNode*)malloc(sizeof(ThreadNode));
	pre = t;
	return 0;
}