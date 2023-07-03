#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"

/*
* 1.存放1000位好友信息
*		姓名
*		电话
*		性别
*		住址
*		年龄
* 2.增加好友信息
* 3.删除指定好友信息
* 4.查询好友信息
* 5.修改好友信息
* 6.打印好友信息
*/

void menu() 
{
	printf("***********选择以下功能************\n");
	printf("*1.增加好友信息 2.删除指定好友信息*\n");
	printf("*3.查询好友信息 4.修改指定好友信息*\n");
	printf("*5.打印好友信息 0.退出好友通讯录***\n");
}
int main() 
{
	struct Contact con;
	Init(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择通信录功能\n");
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
			printf("退出程序\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
}