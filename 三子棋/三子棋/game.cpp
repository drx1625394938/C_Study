#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col) 
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void PrintBoard(char board[ROW][COL], int row, int col) 
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) 
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1) 
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < col - 1) 
		{
			for (int j = 0; j < col; j++) 
			{
				printf("---");
					if (j < col - 1) 
					{
						printf("|");
					}
			}
			printf("\n");
		
		}
	}
}
void Player(char board[ROW][COL], int row, int col) 
{

	int x;
	int y;
	while (1)
	{
		printf("�����:>");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] ='*';
				break;
			}
			else
				printf("�õط��ѱ�ռ��,����������\n");
		}
		else 
		{
			printf("����������\n");
		}
	}
}
void Computer(char board[ROW][COL], int row, int col) 
{
	int x;
	int y;
	while(1)
	{
	srand((unsigned int)time(NULL));
	x = rand() % ROW;
	y = rand() % COL;
	if (board[x][y] == ' ')
	{
		board[x][y] = 'o';
		printf("������:>%d %d\n", x + 1, y + 1);
		break;
	}
	else continue;
	}
}
char Is_Win(char board[ROW][COL], int row, int col)
{
	//�����
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//�����
	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//�������
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�������ˣ�û��ʤ��
	if (1 == Is_Full(board, ROW, COL))
	{
		return 'Q';
	}
	 if (0 == Is_Full(board, ROW, COL))
	{
		return 'C';
	}
}
int Is_Full(char board[ROW][COL], int row, int col) 
{
	int isFull = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				isFull =0;
			}
		}
	}
	return isFull;
}