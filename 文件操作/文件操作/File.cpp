#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main() 
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL) 
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//�ɹ�
//	//// д�ļ�
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	//���ļ�
//	printf("%c",fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r+");
//	if (pf == NULL) 
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fputs("hello",pf);
//	fgets(arr, 1024, pf);
//	puts(arr);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//
//}
//struct Student
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main() 
//{
//	struct Student s = { 0};
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL) 
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//��ʽ������
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//��ʽ�����
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", (s.n), (s.score), (s.arr));
//
//}
//int main() 
//{
//	FILE* pf = fopen("text.txt", "r");
//	char arr[10];
//	fputs(arr, pf);
//	printf("%s", arr);
//	//fputc(,stdout);
//}

//fwrite
struct Student 
{
	char name[10];
	int age;
	char sex[5];
};
//int main() 
//{
//	struct Student stu1 = { "drx",22,"male" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL) 
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fwrite(&stu1, sizeof(struct Student), 1, pf);
//}

int main() 
{
	FILE* pf = fopen("text.txt", "r");
	struct Student stu2 = { 0 };
	fread(&stu2, sizeof(struct Student), 1, pf);
	printf("%s %d %s", stu2.name, stu2.age, stu2.sex);
}