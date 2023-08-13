#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#define Maxsize 10

typedef struct SeqQueue
{
	int data[Maxsize];
	int front;//Ç°
	int rear;//ºó
}SeqQueue;

SeqQueue InitSeqQueue(SeqQueue &sq) 
{
	sq.front = 0;
	sq.rear = 0;
}

bool Is_empty(SeqQueue sq) 
{
	if (sq.front == sq.rear) return true;
	else return false;
}
bool Is_full(SeqQueue sq) 
{
	if ((sq.rear + 1) % Maxsize == sq.front)return true;
	else return false;
}
bool EnQueue(SeqQueue &sq,int element) 
{
	if ((sq.rear + 1) % Maxsize == sq.front) return false;
	sq.data[sq.rear] = element;
	sq.rear = (sq.rear + 1) % Maxsize;
	return true;
}
bool DeQueue(SeqQueue& sq,int &x) 
{
	if (sq.rear == sq.front)return false;
	x = sq.data[sq.front];
	sq.front = (sq.front + 1) % Maxsize;
	return true;
}

int GetHead(SeqQueue sq) 
{
	return sq.data[sq.front];
}

int main()
{
	SeqQueue sq;

	return 0;
}