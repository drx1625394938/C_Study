#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("************************");
	printf("*****1.Play  0.Exit*****");
	printf("************************");
}
//�����������������
#include<stdlib.h>
#include<time.h>
//RAND_MAX 32767
void game() 
{
	//ʱ���
	srand((signed int)time(NULL));
	int random = rand();
	printf("�����%d\n", random);
	int num = 0;
	while (1) 
	{
		scanf("%d", &num);
		if (num > random) 
		{
			printf("�������,����������\n");
		}
		else if(num < random) 
		{
			printf("���С�ˣ�����������\n");
		}
		else 
		{
			printf("��ϲ���������\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			printf("��Ϸ��ʼ,���������µ���\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������\n");
			break;
		}

	}
		while (input);

}