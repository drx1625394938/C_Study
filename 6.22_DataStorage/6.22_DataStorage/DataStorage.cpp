#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//(1)�������ֽ����С���ֽ���ĸ�����ó�����֤��ǰ�������ֽ���
//����ֽ������ݵĸ�λ����ڵ�ַ�ĵ�λ�����ݵĵ�λ����ڵ�ַ�ĸ�λ
//С���ֽ���:���ݵĸ�λ����ڵ�ַ�ĸ�λ�����ݵĵ�λ����ڵ�ַ�ĵ�λ
//#include<stdio.h>
//int Judge_sys() 
//{
//	//��˷���1��С�˷���0
//	int a = 1;
//	char* p =(char *) & a;
//	if (*p == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//
//}
//int main() 
//{
//	printf("%d",Judge_sys());
//}

//(2)�ж����н��
//int main() 
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);//-1 -1 255
//
//	//-1  ԭ��10000000 00000000 00000000 00000001
//	//    ����11111111 11111111 11111111 11111111
//	//a ����a��char���ͣ�ֻ�ܴ洢һ���ֽڵĶ�����λ�����a�Ĵ洢�Ķ��������б��ض�Ϊ11111111
//	//����Ϊ���з��������ڴ�ӡ����ʱ��������������߲�1������Ϊ11111111 11111111 11111111 11111111
//	//���Ϊa=%d���Ϊ-1
//	//b ͬ��Ϊ-1
//	//c ����������a��ͬ��������c���޷���char ���Ϊ255
//}

//(3)
//int main() 
//{
//	char a = -128;
//	printf("%u\n", a);//11111111 111111111 11111111 10000000
//	return 0;
//}
//// -128 ԭ��-10000000 00000000 00000000 10000000
////��-11111111 11111111 11111111 01111111
////��-11111111 11111111 11111111 10000000            
////11111111 11111111 11111111 10000000  


//(4)
//int main()
//{
//	//char �Ų���128 127+1=-128
//	char a = 128;
//	printf("%u\n", a);//4294967168
//	return 0;
//}
// 

//��5��
//int main() {
//	int i = -20;
//	//1000000 00000000 00000000 00010100
//	//1111111 11111111 11111111 11101011
//	//1111111 11111111 11111111 11101100 - ����
//
//	unsigned  int  j = 10;
//	//0000000 00000000 00000000 00001010 - ����
//
//	//1111111 11111111 11111111 11101100 - ����
//	//0000000 00000000 00000000 00001010 - ����
//	//1111111 11111111 11111111 11110110 - ��� ����
//	//1111111 11111111 11111111 11110101 - ����
//	//1000000 00000000 00000000 00001010 - ԭ��
//	printf("%d\n", i + j);//-10
//	//���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//}

//#include <windows.h>
#include <stdio.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//        //9 8 7 6 5 4 3 2 1 0 4294967295 4294967294 4294967293����
//        //��ѭ��
//    }
//    return 0;
//}

#include<string.h>
//int main() {
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;//char�ķ�Χ-128-->127
//        //-1 -2 -3 ���� -127 -126 -125 ���� -1 0
//    }
//    printf("%d", strlen(a));//255
//    //
//}

#include <stdio.h>
unsigned char i = 0;//0-255
int main()
{
    for (i = 0; i <= 255; i++)
    {
        printf("hello world\n");//��ѭ��
    }
    return 0;
}