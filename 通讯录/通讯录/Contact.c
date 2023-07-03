#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Init(struct Contact *con) 
{
	memset(con->data, 0, sizeof(con->data));
	con->size = 0;//初始化通讯录元素位0
}
void Add(struct Contact* con) 
{	
	if (con->size == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", con->data[con->size].name);
		printf("请输入性别\n");
		scanf("%s", con->data[con->size].sex);
		printf("请输入年龄\n");
		scanf("%d", &con->data[con->size].age);
		printf("请输入手机号\n");
		scanf("%s", con->data[con->size].phone_num);
		printf("请输入地址\n");
		scanf("%s", con->data[con->size].address);
		con->size++;
		printf("添加成功\n");
		
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
		printf("通讯录为空\n");
}
void Delete(struct Contact* con) 
{
	int index=0;
	printf("请输入要删除第几条数据\n");
	scanf("%d", &index);
	if (index>0&&index <= con->size)
	{
		memset(&(con->data[index - 1]), 0, sizeof(con->data[0]));
		con->size--;
	}
	else
	{
		if (index <= 0) printf("输入有误\n");
		else printf("该条数据为空\n");
	}
}
void Modify(struct Contact* con) 
{
	int index = 0;
	printf("请输入您要修改第几条数据\n");
	scanf("%d", &index);
	if (index > 0 && index <= con->size)
	{
		printf("请输入名字\n");
		scanf("%s", con->data[index - 1].name);
		printf("请输入性别\n");
		scanf("%s", con->data[index - 1].sex);
		printf("请输入年龄\n");
		scanf("%d", &con->data[index - 1].age);
		printf("请输入手机号\n");
		scanf("%s", con->data[index - 1].phone_num);
		printf("请输入地址\n");
		scanf("%s", con->data[index - 1].address);
		printf("修改成功\n");
	}
	else

	{
		if (index <= 0) printf("输入有误\n");
		else printf("该条数据为空\n");
	}
}
void Inquire(struct Contact* con) 
{
	int index = 0;
	printf("请输入您要查询第几条数据\n");
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
		if (index <= 0) printf("输入有误\n");
		else printf("该条数据为空\n");
	}

}
