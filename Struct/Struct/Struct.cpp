#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Student
{
	char Name[20];
	int Age;
	char Id[10];
};
int main()
{
	Student s1 = { "Kasugano",16,"19100117" };
	printf("%d\n", s1.Age);
	Student* ps = &s1;
	printf("%s\n", (*ps).Name);
	printf("%s\n", (*ps).Id);

	printf("%s\n", ps->Id);
	printf("%d\n", ps->Age);
	char a = 0;
	printf("%u\n",sizeof(!a));

}