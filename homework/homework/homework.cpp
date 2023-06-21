#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Binary_Count1(unsigned int a)
{
	int count = 0;
	while (a)
	{
		if (a % 2 != 0) 
		{
			count++;
		}
		a /= 2;
	}
	return count;
}
int Binary_Count2(int a) 
{
	int count = 0;
	for (int i = 0; i < 32; i++) 
	{
		if ((a >> i) & 1 == 1) 
		{
			count++;
		}
	}
	return count;
}
int Binary_Count3(int a) 
{
	int count = 0;
	while (a) 
	{
		a= a & (a)-1;
		count++;
	}
	return count;
}
void Bin_Num(int n) 
{
	if (n != 0) 
	{
		Bin_Num(n / 10);
		printf("%d ", n % 10);
	}
}
int Fac(int n) 
{
	int res = 1;
	for (int i = 1; i <= n; i++) 
	{
		res *= i;
	}
	return res;
}
int Fac1(int a) 
{
	if (a > 1) {
		return a * Fac(a--);
	}
}
int Str(char arr[]) 
{

}
int main() 
{
	int a = 0;
	scanf("%d", &a);
	int res1=Binary_Count1(a);
	printf("%d\n", res1);
	int res2 = Binary_Count2(a);
	printf("%d\n", res2);
	int res3 = Binary_Count3(a);
	printf("%d\n", res3);
	printf("输出每一位\n");
	Bin_Num(a);
	printf("阶乘\n");
	int res4=Fac(a);
	printf("%d\n", res4);
	int res5= Fac1(a);
	printf("%d\n", res5);
	char arr[] = "abcdef";
	int res6=Str(arr);
	
}