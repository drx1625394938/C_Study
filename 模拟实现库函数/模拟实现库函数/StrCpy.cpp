#define _CRT_SECURE_NO_WARNINGS 1
//void My_Strcpy(char* dest, char* src) 
//{
//	while (*src != '\0') 
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
#include<assert.h>
char* My_Strcpy(char* dest, const char* src) 
{
	char* ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
#include<stdio.h>
unsigned int My_Strlen(const char* src) 
{
	assert(src != NULL);
	int count = 0;
	//�����ַ����ȣ������ret֮��
	while (*(src++))
		count++;
	return count;
}
int main() 
{
	char arr1[] = "**********";
	char arr2[] = "hello";
	My_Strcpy(arr1, arr2);
	printf("%s\n", arr1);
	char arr3[] = "abcdefg";
	printf("%d", My_Strlen(arr3));
	return 0;
}