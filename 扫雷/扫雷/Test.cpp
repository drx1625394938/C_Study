#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu() 
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
	printf("��ѡ��");
}
#include"game.h"
void game() 
{	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = {0};
	//2.�Ų���ʱ����Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ�� mine
	InitBoard(mine, ROWS, COLS,'0');
	//��ʼ�� show
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	PrintBoard(mine, ROW, COL);
	PrintBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);
	//ɨ��
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
			printf("�˳���Ϸ");
			break;
		default:
			printf("����������\n");
			break;
		}

	} while (input);
}
int main() 
{
	test();
	return 0;
}