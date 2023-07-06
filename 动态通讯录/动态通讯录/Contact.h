#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NAME 10
#define MAX_ID 10
#define MAX_ADDRESS 20
#define MAX_NUMBER 12
#define DEFAULT_SIZE 3
#define ADD_CAPCITY 2
struct PeopleInfo 
{
	char name[MAX_NAME];
	char Id[MAX_ID];
	char adress[MAX_ADDRESS];
	char number[MAX_NUMBER];
	int age;
};

struct Contact 
{
	int size;
	int capcity;
	struct PeopleInfo data[];

};
void Add(struct Contact* ps);
void ContactInit(struct Contact* ps);
void Print(struct Contact* ps);