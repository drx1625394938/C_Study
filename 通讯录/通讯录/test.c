#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"

/*
* 1.���1000λ������Ϣ
*		����
*		�绰
*		�Ա�
*		סַ
*		����
* 2.���Ӻ�����Ϣ
* 3.ɾ��ָ��������Ϣ
* 4.��ѯ������Ϣ
* 5.�޸ĺ�����Ϣ
* 6.��ӡ������Ϣ
*/

void menu() 
{
	printf("***********ѡ�����¹���************\n");
	printf("*1.���Ӻ�����Ϣ 2.ɾ��ָ��������Ϣ*\n");
	printf("*3.��ѯ������Ϣ 4.�޸�ָ��������Ϣ*\n");
	printf("*5.��ӡ������Ϣ 0.�˳�����ͨѶ¼***\n");
}
int main() 
{
	struct Contact con;
	Init(&con);
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��ͨ��¼����\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add(&con);
			break;
		case 2:
			Delete(&con);
			break;
		case 3:
			Inquire(&con);
			break;
		case 4:
			Modify(&con);
			break;
		case 5:
			Print(&con);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
}