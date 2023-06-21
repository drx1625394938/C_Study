#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void InitBoard(char mine[ROWS][COLS], int rows, int cols,char set);
void PrintBoard(char show[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void Demining(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
int GetMineNum(char mine[ROWS][COLS], int x, int y);