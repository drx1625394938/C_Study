#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 5
#define COL 5
#include<stdio.h>
void printBoard(char board[ROW][COL], int row, int col) 
{
	for (int i = 0; i < row; i++) 
	{
		//打印数据行
		for (int j = 0; j < col; j++) 
		{
			printf(" %c ", board[i][j]);
			if (j < col-1) 
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分割行
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
int main() 
{
	char board[ROW][COL] = {0};
	for (int i = 0; i < ROW; i++) 
	{
		for (int j = 0; j < COL; j++) 
		{
			board[i][j] = ' ';
		}
	}
	printBoard(board, ROW, COL);
	return 0;
}