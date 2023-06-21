#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct  Stu
{
	char name[10];
	int age;
	char Id[10];
}Stu;

struct T
{
	int a;
	Stu s;
};
int main() 
{
	Stu s1 = {};
	struct T t = { 10,{"drx",10,"19100117"} };
	t.s.age;
	
}