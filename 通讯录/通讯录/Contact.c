#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Init(struct Contact *con) 
{
	memset(con->data, 0, sizeof(con->data));
	con->size = 0;//��ʼ��ͨѶ¼Ԫ��λ0
}
void Add(struct Contact* con) 
{	
	if (con->size == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", con->data[con->size].name);
		printf("�������Ա�\n");
		scanf("%s", con->data[con->size].sex);
		printf("����������\n");
		scanf("%d", &con->data[con->size].age);
		printf("�������ֻ���\n");
		scanf("%s", con->data[con->size].phone_num);
		printf("�������ַ\n");
		scanf("%s", con->data[con->size].address);
		con->size++;
		printf("��ӳɹ�\n");
		
	}

}
void Print(struct Contact* con) 
{
	if (con->size != 0)
	{
		for (int i = 0; i < con->size; i++)
		{
			printf("%d.%s ",i+1,con->data[i].name);
			printf("%s ", con->data[i].sex);
			printf("%d ", con->data[i].age);
			printf("%s ", con->data[i].phone_num);
			printf("%s ", con->data[i].address);
			printf("\n");
		}
	}
	else
		printf("ͨѶ¼Ϊ��\n");
}
void Delete(struct Contact* con) 
{
	int index=0;
	printf("������Ҫɾ���ڼ�������\n");
	scanf("%d", &index);
	if (index>0&&index <= con->size)
	{
		memset(&(con->data[index - 1]), 0, sizeof(con->data[0]));
		con->size--;
	}
	else
	{
		if (index <= 0) printf("��������\n");
		else printf("��������Ϊ��\n");
	}
}
void Modify(struct Contact* con) 
{
	int index = 0;
	printf("��������Ҫ�޸ĵڼ�������\n");
	scanf("%d", &index);
	if (index > 0 && index <= con->size)
	{
		printf("����������\n");
		scanf("%s", con->data[index - 1].name);
		printf("�������Ա�\n");
		scanf("%s", con->data[index - 1].sex);
		printf("����������\n");
		scanf("%d", &con->data[index - 1].age);
		printf("�������ֻ���\n");
		scanf("%s", con->data[index - 1].phone_num);
		printf("�������ַ\n");
		scanf("%s", con->data[index - 1].address);
		printf("�޸ĳɹ�\n");
	}
	else

	{
		if (index <= 0) printf("��������\n");
		else printf("��������Ϊ��\n");
	}
}
void Inquire(struct Contact* con) 
{
	int index = 0;
	printf("��������Ҫ��ѯ�ڼ�������\n");
	scanf("%d", &index);
	if (index > 0 && index <= con->size)
	{
		printf("%d.%s ",index,con->data[index-1].name);
		printf("%s ", con->data[index - 1].sex);
		printf("%d ", con->data[index - 1].age);
		printf("%s ", con->data[index - 1].phone_num);
		printf("%s ", con->data[index - 1].address);
		printf("\n");
	}
	else

	{
		if (index <= 0) printf("��������\n");
		else printf("��������Ϊ��\n");
	}

}
