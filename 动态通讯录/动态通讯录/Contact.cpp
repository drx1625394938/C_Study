#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void ContactInit(struct Contact* ps)
{
	struct Contact* str= (struct Contact*)malloc(2 * sizeof(int) + DEFAULT_SIZE * sizeof(struct PeopleInfo));
	if (str == NULL)
	{
		return;
	}
	ps = str;
	memset(ps->data, 0, DEFAULT_SIZE * sizeof(struct PeopleInfo));
	ps->capcity = DEFAULT_SIZE;
	ps->size = 0;
}
//void CheckCapcity(struct Contact* ps) 
//{
//	if (ps->size == ps->capcity)
//	{
//		struct Contact* ptr = (struct Contact*)realloc(ps, 2 * sizeof(int) + (ps->capcity + ADD_CAPCITY) * sizeof(struct PeopleInfo));
//		if (ptr == NULL)return;
//		ps = ptr;
//		printf("增容成功\n");
//		ps->capcity += ADD_CAPCITY;
//	}
//}
void Add(struct Contact* ps) 
{
		//CheckCapcity(ps);

		printf("请输入名字\n");
		scanf("%s",ps->data[ps->size].name);

		printf("请输入学号\n");
		scanf("%s", ps->data[ps->size].Id);

		printf("请输入年龄\n");
		scanf("%d", &ps->data[ps->size].age);

		printf("请输入地址\n");
		scanf("%s", ps->data[ps->size].adress );

		printf("请输入手机号\n");
		scanf("%s", ps->data[ps->size].number);

		ps->size++;
}
void Print(struct Contact* ps) 
{
	for (int i = 0; i < ps->size; i++) 
	{
		printf("%d. 姓名:%s ", i + 1, ps->data[i].name);
		printf("%s 学号: ", ps->data[i].Id);
		printf("%d 年龄: ", ps->data[i].age);
		printf("%s 住址: ", ps->data[i].adress);
		printf("%s 手机号: ", ps->data[i].number);
	}	
}