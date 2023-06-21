#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu() 
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
	printf("请选择");
}
#include"game.h"
void game() 
{	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = {0};
	//2.排查雷时的信息
	char show[ROWS][COLS] = { 0 };
	//初始化 mine
	InitBoard(mine, ROWS, COLS,'0');
	//初始化 show
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	PrintBoard(mine, ROW, COL);
	PrintBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);
	//扫雷
	Demining(mine,show,ROW,COL);
}
void test() 
{
		int input;
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请重新输入\n");
			break;
		}

	} while (input);
}
int main() 
{
	test();
	return 0;
}