#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

void menu() 
{
	printf("********��ѡ�����¹���*******\n");
	printf("******1.Add    2.Delete******\n");
	printf("******3.Modify 4.Inquire*****\n");
	printf("******5.Print  0.Exit********\n");
}
int main() 
{
	struct Contact con;
	ContactInit(&con);
	int input = 0;
	do 
	{
		menu();
		printf("������ѡ���ܵı��\n");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			Add(&con);
			break;
		case 2:
			//Delete();
			break;
		case 3:
			//Modify();
			break;
		case 4:
			//Inquire();
			break;
		case 5:
			Print(&con);
			break;
		case 0:
			//printf("�˳�����");
			break;
		default:
			printf("�������,����������\n");
		}
	} while (input);


}