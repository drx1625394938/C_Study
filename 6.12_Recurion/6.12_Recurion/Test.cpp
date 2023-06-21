#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//汉诺塔递归
void  Move(int x, int y) 
{
	printf("%c -> %c\n",x, y);
}
//求搬的次数
int Hanoi(int n) 
{
	if (n > 1)
	{
		return 2 * Hanoi(n - 1) + 1;
	}
	else
		return 1;
}
//求搬的方法
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
	int n=0;//A柱上需要搬动石盘的数量
	scanf("%d", &n);
	int num;//需要搬动的次数
	num = Hanoi(n);
	printf("%d\n", num);
	Hanoi1(n, 'A', 'B', 'C');
	return 0;
}