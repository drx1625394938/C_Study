#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
void InitBoard(char board[ROW][COL], int row, int col);
void PrintBoard(char board[ROW][COL],int row,int col);
void Player(char board[ROW][COL], int row, int col);
void Computer(char board[ROW][COL], int row, int col);
char Is_Win(char board[ROW][COL], int row, int col);
int Is_Full(char board[ROW][COL], int row, int col);