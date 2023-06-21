//1.从大到小输出：写代码将三个数按从大到小输出
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
void menu() 
{
	printf("****************************************");
	printf("*******1.paly             0.exit********");
	printf("****************************************");
}
/*void game()
{
	int answer = 520521;
	printf("游戏开始,请输入一个数");
	int inputAnswer = 0;
	while (inputAnswer!=answer) 
	{
		inputAnswer=scanf("%d", &inputAnswer);
		if (inputAnswer > answer) 
		{
			printf("输入大了");
			printf("&d", answer);
			continue;
		}
		else if (inputAnswer < answer) 
		{
			printf("输入小了");
			printf("%d", answer);
			continue;
		}
	}
	printf("恭喜你，猜对了");
}*/
int main()
{
	int a = 5;
	int b = 8;
	int c = 3;
	int max;
	int mid;
	int min;
	if (a > b && a > c)
	{
		max = a;
		if (b > c)
		{
			mid = b;
			min = c;
		}
		else
		{
			mid = c;
			min = b;
		}
	}
	else if (b > a && b > c)
	{
		max = b;
		if (a > c)
		{
			mid = a;
			min = c;
		}
		else
		{
			mid = c;
			min = a;
		}
	}
	else
	{
		max = c;
		if (a > b)
		{
			mid = a;
			min = b;
		}
		else
		{
			mid = b;
			min = a;
		}
	}
	printf("%d%d%d\n", max, mid, min);
	//2.输出1-100中3的倍数
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	//3.最大公约数(辗转相除法)
	int num1 = 24;
	int num2 = 18;
	/*num1 = scanf("%d", &num1);
	num2 = scanf("%d", &num2);*/
	int res = num1 % num2;
	while (res != 0)
	{
		num1 = num2;
		num2 = res;
		res = num1 % num2;
	}
	printf("%d", num2);

	//4.打印1000-2000年的闰年
	for (int i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d ", i);

		}
		else if (i % 400 == 0)
		{
			printf("%d ", i);
		}
		//printf("\n");
	}
	printf("\n");
	//5.打印100-200之间所有素数
	for (int i = 101; i <= 200; i += 2)
	{
		//判断是否为素数 
		//素数的判断规则
		//1.试除法
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d是素数 ", i);
		}
	}
	//6.1-100中9的个数
	int num = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			num++;
		else if (i / 10 == 9)
			num++;
		else if (i % 10 == 9 && i / 10 == 9)
			num += 2;
	}
	printf("%d\n", num);
	//7.分数求和：计算1/1-1/2+1/3-1/4+...-1/100
	float sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			sum = sum + 1.0 / i;
		}
		if (i % 2 == 0)
			sum -= 1.0 / i;
	}
	printf("%f\n", sum);

	//8.找出十个数中的最大值
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max1 = arr[0];
	//int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max1)
			max1 = arr[i];
	}
	printf("%d\n", max1);

	//9.输出9*9乘法表
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d= %-2d ", i, j, i * j);
		}
		printf("\n");
	}
	//10.模拟用户登录情景
		/*int password = 520521;
		int userpass = 0;
		int count = 0;
		while (count < 3)
		{
			userpass = scanf("%d", &userpass);
			if (userpass != password)
			{
				if (count < 3) {
					printf("密码错误，请重新输入\n");
					count++;
				}
				if (count == 3)
					printf("机会已经用完");
			}
			if(userpass == password)
			{
				printf("密码正确");
				count = 0;
				break;
			}

		}*/

}
		