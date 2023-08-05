#define _CRT_SECURE_NO_WARNINGS 1
#define MaxSize 10
typedef struct QNode 
{
	int data[MaxSize];
	int front;//ͷָ��
	int rear;//βָ��
}SqQueue;//˳�����

//��ʼ��
int InitSqQueue(SqQueue* sqQ) 
{
	sqQ->front = 0;
	sqQ->rear = 0;
	return 1;
}
//��
int AddSqQueue(SqQueue* SqQ, int element) 
{
	if ((SqQ->rear + 1) % MaxSize == SqQ->front)return 0;//����
	SqQ->data[SqQ->rear] = element;
	SqQ->rear = (SqQ->rear + 1) % MaxSize;
}
//ɾ
int DeleteSqQueue(SqQueue* sqQ, int* element) 
{
	if (sqQ->front == sqQ->rear)return 0;//�ձ�
	*element = sqQ->data[sqQ->front];
	sqQ->front = (sqQ->front + 1) % MaxSize;
}
int FindSqQueue(SqQueue* sqQ) 
{
	return sqQ->data[sqQ->front];
}

int main() 
{
	SqQueue sqQ;

}