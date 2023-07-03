#pragma once
#define MAX 1000
#define NAME_MAX 20 
#define SEX_MAX 5 
#define ADD_MAX 30
#define PHONE_MAX 20 
#include<stdio.h>
#include<string.h>
void Init(struct Contact* con);
void Add(struct Contact* con);
void Delete(struct Contact* con);
void Modify(struct Contact* con);
void Inquire(struct Contact* con);
struct PeopleInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char address[ADD_MAX];
	char phone_num[PHONE_MAX];
	int age;
};

struct Contact
{
	struct PeopleInfo data[MAX];
	int size;

};