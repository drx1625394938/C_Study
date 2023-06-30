#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>

char* my_strlen(char* dest, const char* src) 
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//将源字符串的值赋给目标字符串
	while (*dest++ = *src++)
	{
		;
	}
	//返回目标字符串
	return dest;
}
char* my_strcat(char* dest, const char* src) 
{
	assert(dest && src);
	char* ret = dest;
	//找到目标字符串'\0'的位置
	while (*dest++);
	//源字符串追加过去
	while (*dest++ = *src++);
	return ret;
}
int my_strcmp(const char* str1, const char* str2) 
{
	assert(str1 && str2);
	//逐个
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
//字符串库函数的使用
 int main()
 {
	 //1.strlen
	 //2.strcat,将一个字符串加到另一个字符串后面
	 char arr1[20] = "abcdefg";
	 char arr2[] = "abcdefg";
	 strcat(arr1, arr2);
	 printf("%s\n", arr1);
	 //3.strcmp 第一个大于第二个返回 1 相等返回0 小于返回-1
	 char arr3[20] = "abcdefxxxxxxxxxx";
	 char arr4[] = "abcdef";
	 printf("%d\n", my_strcmp(arr3, arr4));

	 printf("%d\n", strcmp(arr1, arr2));
	 printf("%s %s", arr1, arr2);
	 //4.strcpy将一个源字符串复制到目标字符串中去

	 //5.strncat(str1,str2,6),往目标字符串中追加源字符串里的count个字符 
	 //strncat(arr3, arr4, 10);

	 //6.strncpy 将源字符串count个字符复制到目标字符串中，如果count大于源字符串字符数，则补0
	 strncpy(arr3, arr4, 10);

	 //7.strstr  判断源字符串是否为目标字符串的子串 如果是则返回第一个字符的地址，不是返回NULL
	 /*char arr5[] = "abcdefg";
	 char arr6[] = "cde";
	 char* ret = my_strstr(arr5, arr6);
	 if (ret != NULL)
	 {
		 printf("%s\n", ret);
	 }
	 else
		 printf("没找到\n");*/
		 //8.strtok 将字符串按照给定字符切割并输出
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