#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#define Maxsize 10000
#include<stdio.h>
//#define MaxSize 10
//typedef struct SqStack 
//{
//	int data[MaxSize];
//	int top;
//}SqStack;
//
//int InitSqStack(SqStack* sqstack) 
//{
//	sqstack->top = -1;
//	return 1;
//}
//
//int AddSqstack(SqStack* sqstack,int element) 
//{
//	if (sqstack->top == MaxSize - 1)return 0;//����
//	sqstack->data[sqstack->top++]=element;
//	//sqstack->top++;
//	return 1;
//}
//int DeleteSqstack(SqStack* sqstack,int* element)
//{
//	if (sqstack->top == -1)return 0;//����޷�ɾ��
//	*element = sqstack->data[sqstack->top];
//	sqstack->top--;
//	return *element;
//}
//
//int FindSqstack(SqStack sqstack) 
//{
//	if (sqstack.top == -1)return 0;
//	return sqstack.data[sqstack.top];
//}
//
//typedef struct Node 
//{
//	int data;
//	Node* next;
//}Node,*Lstack;
//
////�������ʼ��
//int Init(Lstack) 
//{
//
//}

//typedef struct SqStack
//{
//	int data[Maxsize];
//	int top;
//}SqStack;
//
//int InitSqStack(SqStack* sqstack)
//{
//	sqstack->top = -1;
//	return 1;
//}
//
//int AddSqstack(SqStack* sqstack, int element)
//{
//	if (sqstack->top == Maxsize - 1)return 0;//����
//	sqstack->data[sqstack->top++] = element;
//	//sqstack->top++;
//	return 1;
//}
//int DeleteSqstack(SqStack* sqstack, int* element)
//{
//	if (sqstack->top == -1)return 0;//����޷�ɾ��
//	*element = sqstack->data[sqstack->top];
//	sqstack->top--;
//	return *element;
//}
//
//int FindSqstack(SqStack sqstack)
//{
//	if (sqstack.top == -1)return 0;
//	return sqstack.data[sqstack.top];
//}
//
//typedef struct Node
//{
//	int data;
//	Node* next;
//}Node, * Lstack;
//
////�������ʼ��
//int Init(Lstack)
//{
//
//}

typedef struct Seqstack
{
    char data[Maxsize];
    int top;
}Seqstack;

bool isValid(char* s) {
    Seqstack seqstack;
    seqstack.top = -1;
    int i = 0;
    while (i < sizeof(s))
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')//�����Ž�ջ
            seqstack.data[++seqstack.top] = s[i];
        else//������
        {
            if (seqstack.top == -1) return false;//�����ջ�շ���false
            //ջ����
            //�����')'����ջԪ�ز���'('�򷵻�false
            if (s[i] == ')' && seqstack.data[seqstack.top--] != '(')return false;
            if (s[i] == ']' && seqstack.data[seqstack.top--] != '[')return false;
            if (s[i] == '}' && seqstack.data[seqstack.top--] != '{')return false;
        }
        i++;
    }
    return seqstack.top == -1 ? true : false;

}

int main() 
{
	char s[] =  "(())(()){}";
    isValid(s);
}