#define _CRT_SECURE_NO_WARNINGS 1
//����������
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
	//�������
		Player(board,ROW,COL);
		PrintBoard(board, ROW, COL);
		printf("\n");
		ret=Is_Win(board,ROW,COL);
		if (ret != 'C') 
		{
			break;
		}
	//��������
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
		printf("��һ�ʤ\n");
	}
	else if (ret == 'o')
		printf("���Ի�ʤ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}
void Test() 
{
	int input = 0;
	do 
	{
		Menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			//printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������,������ѡ��\n");
			break;
		}

	} while (input);
}
int main() 
{
	Test();
	return 0;
}