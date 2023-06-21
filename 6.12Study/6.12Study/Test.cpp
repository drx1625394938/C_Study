#define _CRT_SECURE_NO_WARNINGS 1
#include "Add.h"
#include<stdio.h>
//����һ�����֣�����ÿһλ��˳�����(�ݹ�)
void print(int num) 
{
	if (num > 9) 
	{
		print(num / 10);
	}
	printf("%d ",num % 10);
}
//дһ�����������ַ�������(�ݹ�)
int My_Strlen(char* arr) 
{
	if (*arr != '\0')
	{
		arr++;
		return 1 + My_Strlen(arr);
	}
	else
		return 0;
		
}
//��n�Ľ׳�(�ݹ�)
int Factorial(int n) 
{
	if (n <= 1)
		return 1;
	else if (n > 1)
	{
		return n * Factorial(n - 1);
	}
}
//ѭ��
int Factorial1(int n) 
{
	int res = 1;
	for(int i=1;i<=n;i++)
	{
		res *= i;
	}
	return res;
}
//��쳲��������е�n����ֵ(�ݹ飬Ч�ʺܵ� )
int Fib(int n) 
{
	if (n <= 2)
	{
		return 1;
	}
	else
		return Fib(n - 1) + Fib(n - 2);
}
//��ѭ����쳲��������е�n��ֵ(forѭ��)
int Fib2(int n) 
{
	int a = 1;
	int b = 1;
	int c = 1;
	for(int i = 3; i <= n; i++) 
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
//whileѭ��
int Fib3(int n) 
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) 
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main() 
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	printf("\n");
	char arr[] = "hello,world111";
	int len = My_Strlen(arr);
	printf("%d\n", len);
	int res = Factorial(5);
	printf("%d\n", res);
	printf("%d\n", Factorial1(5));
	printf("%d\n", Fib(20));
	printf("%d\n", Fib2(20));
	printf("%d\n", Fib3(20));
	return 0;
}