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
//		printf("���ݳɹ�\n");
//		ps->capcity += ADD_CAPCITY;
//	}
//}
void Add(struct Contact* ps) 
{
		//CheckCapcity(ps);

		printf("����������\n");
		scanf("%s",ps->data[ps->size].name);

		printf("������ѧ��\n");
		scanf("%s", ps->data[ps->size].Id);

		printf("����������\n");
		scanf("%d", &ps->data[ps->size].age);

		printf("�������ַ\n");
		scanf("%s", ps->data[ps->size].adress );

		printf("�������ֻ���\n");
		scanf("%s", ps->data[ps->size].number);

		ps->size++;
}
void Print(struct Contact* ps) 
{
	for (int i = 0; i < ps->size; i++) 
	{
		printf("%d. ����:%s ", i + 1, ps->data[i].name);
		printf("%s ѧ��: ", ps->data[i].Id);
		printf("%d ����: ", ps->data[i].age);
		printf("%s סַ: ", ps->data[i].adress);
		printf("%s �ֻ���: ", ps->data[i].number);
	}	
}