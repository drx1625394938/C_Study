#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋
#include<stdio.h>
void Menu() 
{
	printf("**************************\n");
	printf("******1.Play  0.Exit******\n");
	printf("**************************\n");
}
#include "game.h";
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	PrintBoard(board, ROW, COL);
	char ret='C';
	while (1) 
	{
	//玩家下棋
		Player(board,ROW,COL);
		PrintBoard(board, ROW, COL);
		printf("\n");
		ret=Is_Win(board,ROW,COL);
		if (ret != 'C') 
		{
			break;
		}
	//电脑下棋
		Computer(board,ROW,COL);
		PrintBoard(board, ROW, COL);
		printf("\n");
		Is_Win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == 'o')
		printf("电脑获胜\n");
	else if (ret == 'Q')
		printf("平局\n");
}
void Test() 
{
	int input = 0;
	do 
	{
		Menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			//printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误,请重新选择\n");
			break;
		}

	} while (input);
}
int main() 
{
	Test();
	return 0;
}