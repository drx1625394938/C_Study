#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char mine[ROWS][COLS], int rows, int cols,char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}
}
void PrintBoard(char show[ROWS][COLS], int row, int col)
{
	//打印列号
	for (int i = 0; i <= row; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) 
	{
		printf(" %d ", i);
		for (int j = 1; j <=col; j++)
		{
			printf(" %c ", show[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void SetMine(char mine[ROWS][COLS], int row, int col) 
{
	int count = EASY_COUNT;
	srand((unsigned int)time(NULL));
	while (count)
	{

		int x = 0;
		int y = 0;
		x = rand() % row + 1;
		y = rand() % row + 1;
		if (mine[x][y] == '0') 
		{
			mine[x][y] = '1';
			count--;
		}
	}

}
int GetMineNum(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
				
			}
		}
	}
	return count;
}
void Demining(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//排雷
	int x = 0;
	int y = 0;
	int win = 0;
	while (win< ROW * COL - EASY_COUNT)
	{
		printf("请输出排雷坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] != '1')
			{
				//计算附近雷的数量
				int count = 0;
				count=GetMineNum(mine, x, y);
				show[x][y] = count + '0';
				win++;
				PrintBoard(show, ROW, COL);
			}
			else
			{
				printf("很遗憾，你踩到雷了,游戏结束\n");
				break;
			}
		}
		else
			printf("输入的坐标有误");
	}
	printf("恭喜你把雷全部排完了\n");
	PrintBoard(mine, ROW, COL);
	
}
