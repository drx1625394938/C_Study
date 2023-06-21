#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("************************");
	printf("*****1.Play  0.Exit*****");
	printf("************************");
}
//生成随机数并猜数字
#include<stdlib.h>
#include<time.h>
//RAND_MAX 32767
void game() 
{
	//时间戳
	srand((signed int)time(NULL));
	int random = rand();
	printf("随机数%d\n", random);
	int num = 0;
	while (1) 
	{
		scanf("%d", &num);
		if (num > random) 
		{
			printf("输入大了,请重新输入\n");
		}
		else if(num < random) 
		{
			printf("输出小了，请重新输入\n");
		}
		else 
		{
			printf("恭喜你输入对了\n");
			break;
		}
	
	}

}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("\n");
		printf("请选择");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			printf("游戏开始,请输入您猜的数\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("您输入的有误\n");
			break;
		}

	}
		while (input);

}