#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ŵ���ݹ�
void  Move(int x, int y) 
{
	printf("%c -> %c\n",x, y);
}
//���Ĵ���
int Hanoi(int n) 
{
	if (n > 1)
	{
		return 2 * Hanoi(n - 1) + 1;
	}
	else
		return 1;
}
//���ķ���
void Hanoi1(int n, char a, char b, char c) 
{
	if (n == 1) 
	{
		Move(a, c);
	}
	else 
	{
		Hanoi1(n - 1, a, c, b);
		Move(a, c);
		Hanoi1(n - 1, b, a, c);
	}
}
int main()
{
	int n=0;//A������Ҫ�ᶯʯ�̵�����
	scanf("%d", &n);
	int num;//��Ҫ�ᶯ�Ĵ���
	num = Hanoi(n);
	printf("%d\n", num);
	Hanoi1(n, 'A', 'B', 'C');
	return 0;
}