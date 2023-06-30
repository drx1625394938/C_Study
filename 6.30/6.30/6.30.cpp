#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>

char* my_strlen(char* dest, const char* src) 
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//��Դ�ַ�����ֵ����Ŀ���ַ���
	while (*dest++ = *src++)
	{
		;
	}
	//����Ŀ���ַ���
	return dest;
}
char* my_strcat(char* dest, const char* src) 
{
	assert(dest && src);
	char* ret = dest;
	//�ҵ�Ŀ���ַ���'\0'��λ��
	while (*dest++);
	//Դ�ַ���׷�ӹ�ȥ
	while (*dest++ = *src++);
	return ret;
}
int my_strcmp(const char* str1, const char* str2) 
{
	assert(str1 && str2);
	//���
	while (*str1==*str2) 
	{
		if (*str1 == '\0')
			return 0;
			str1++;
			str2++;
	}
	if (*str1 > *str2)
		return 1;
	else 
		return -1;
}
//abcdef   def
 char* my_strstr(const char* p1, const char* p2) 
{
	 assert(p1 && p2);
	 char* s1 = (char*)p1;
	 char* s2 = (char*)p2;
	 char* cur = (char*)p1;
	 if (*p2 == '\0') 
	 {
		 return (char*)p1;
	 }
	 while (*cur) 
	 {
		 s1 = cur;
		 s2 = (char*)p2;
		 while ((*s1 == *s2) && (*s1 && *s2)) 
		 {
			 s1++;
			 s2++;
		 }
		/* if (*s1 == '\0') return NULL;*/
		 if (*s2 == '\0') 
		 { 
			 return cur; 
		 }
		 cur++;
	 }
	 return NULL;
}

 char* my_memcpy(void* dest,const void* src, size_t count) 
 {
	 char* ret = (char*)dest;
	 assert(dest && src);
	 while (count--) 
	 {
		*((char*)dest) = *((char*)src);
		++* (char*)dest;
		++* (char*)src;
	 }
	 return ret;
 
 }
//�ַ����⺯����ʹ��
 int main()
 {
	 //1.strlen
	 //2.strcat,��һ���ַ����ӵ���һ���ַ�������
	 char arr1[20] = "abcdefg";
	 char arr2[] = "abcdefg";
	 strcat(arr1, arr2);
	 printf("%s\n", arr1);
	 //3.strcmp ��һ�����ڵڶ������� 1 ��ȷ���0 С�ڷ���-1
	 char arr3[20] = "abcdefxxxxxxxxxx";
	 char arr4[] = "abcdef";
	 printf("%d\n", my_strcmp(arr3, arr4));

	 printf("%d\n", strcmp(arr1, arr2));
	 printf("%s %s", arr1, arr2);
	 //4.strcpy��һ��Դ�ַ������Ƶ�Ŀ���ַ�����ȥ

	 //5.strncat(str1,str2,6),��Ŀ���ַ�����׷��Դ�ַ������count���ַ� 
	 //strncat(arr3, arr4, 10);

	 //6.strncpy ��Դ�ַ���count���ַ����Ƶ�Ŀ���ַ����У����count����Դ�ַ����ַ�������0
	 strncpy(arr3, arr4, 10);

	 //7.strstr  �ж�Դ�ַ����Ƿ�ΪĿ���ַ������Ӵ� ������򷵻ص�һ���ַ��ĵ�ַ�����Ƿ���NULL
	 /*char arr5[] = "abcdefg";
	 char arr6[] = "cde";
	 char* ret = my_strstr(arr5, arr6);
	 if (ret != NULL)
	 {
		 printf("%s\n", ret);
	 }
	 else
		 printf("û�ҵ�\n");*/
		 //8.strtok ���ַ������ո����ַ��и���
	/* char str[] = "192.168.10.1";
	 char p = '.';
	 for()*/
	 int a[5] = { 1,2,3,4,5 };
	 int b[10] = { 0 };
	 my_memcpy(b, a, sizeof(a));
	 for (int i = 0; i < sizeof(a); i++) 
	 {
		 printf("%d ", b[i]);
	 }
 }