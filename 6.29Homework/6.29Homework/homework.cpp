#define _CRT_SECURE_NO_WARNINGS 
////���� ������������2 5 �����㲢��ӡ 2 +22+222+2222+22222��ֵ a ,n
#include<stdio.h>
//int main() 
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	for (int i = 0; i < n; i++) 
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//���0-100000�����е�ˮ�ɻ��� 153 n(3)λ����1*1*1+5*5*5+3*3*3=153
#include<math.h>
//int main() 
//{
//	for (int i = 0; i <= 10000000; i++) 
//	{
//	//1.��i��λ��n
//	//2.��ÿһλ���ݴκ�
//	//3.�Ƚ�
//		int temp = i;
//		int n = 1;
//		while (temp/10) 
//		{
//			temp /= 10;
//			n++;
//		}
//		temp = i;
//		int num = 0;
//		int sum = 0;
//		while (temp) 
//		{
//			num = temp % 10;
//			temp /= 10;
//			int power = 1;
//			for (int i = 0; i < n; i++) 
//			{
//				power *= num;
//			}
//			sum += power;
//		}
//		if (i == sum) 
//		{		
//			printf("%d ", i);
//		}
//	}
//	
//}

//��ӡ����
//int main() 
//{
//	int line = 0;
//	scanf("%d", &line);
//	for(int i=1;i<=line;i++)
//}

//����ˮ���� һƿ��ˮ1ԪǮ��������ƿ��һƿ��ˮ��һ��n��Ǯ���ܺȶ���ƿˮ
//��ƿ�ӻ�ˮ����
//int num(int n) 
//{
//	while (n >= 2) 
//	{
//		if (n % 2 == 0)
//		{
//			return n / 2 + num(n / 2);
//		}
//		else
//			return n / 2 + num(n/ 2 + 1);
//	}
//	return 1;//��һƿ�ȣ�����ƿ�ӻ�������ˮ�����ϰ�
//	
//}
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n + num(n));
//}

//��������ż���ֿ���ǰ��������������ż��--ʵ��˼·��˫ָ�룺ǰ����ż����������������Ȼ�󽻻�
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	while (left < right) 
//	{
//		if (arr[left] % 2 == 0 && arr[right] % 2 == 1)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//		else if (arr[left] % 2 == 1 && arr[right] % 2 == 0)
//		{
//			left++;
//			right--;
//		}
//		else if (arr[left] % 2 == 0 && arr[right] % 2 == 0)
//		{
//			left++;
//		}
//		else
//			right++;
//
//		
//	}
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d", arr[i]);
//	}
//}

//ʵ��һ�����������������ַ����е�k���ַ� ABCD 2 CDBA,������ⷨ���������ţ�
//#include<assert.h>
//void lev(char* arr, int sz,int k) 
//{
//	assert(arr);
//	while (k--)
//	{
//		char a = arr[0];
//		for (int i = 1; i < sz; i++) 
//		{
//			arr[i - 1] = arr[i];
//		}
//		arr[sz-1] = a;
//	}
//}
//#include<string.h>
//int main() 
//{
//	int k = 0;
//	scanf("%d", &k);
//	char arr[] = "abcdefg";
//	int sz = strlen(arr);
//	lev(arr, sz,k);
//	printf("%s", arr);
//}

//������ת��
//1.���� ����
//2.��������Ҳ����
//3.������������ ab cdefg
void reverse( char* left, char* right)
{
	while (left < right) 
	{
		char temp = *left;
		*left =*right;
		*right = temp;
		left++;
		right--;
	}
}

void left_move(char* arr, int sz, int k)
{
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+sz-1);
	reverse(arr,arr+sz-1);
}
#include<string.h>
//int main() 
//{
//	int k = 0;
//	scanf("%d", &k);
//	char arr[] = "abcdefg";
//	int sz = strlen(arr);
//	left_move(arr, sz, k);
//	printf("%s", arr);
//}

//�ж�һ���ַ����ǲ�������һ���ַ��������õ���
int is_left_move(char* arr1, char* arr2) 
{
	int sz = strlen(arr1);
	for (int i = 0; i < sz; i++) 
	{
		left_move(arr1, sz,1);
		int ret = strcmp(arr1, arr2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main() 
{
	char arr1[] = "abcdefg";
	char arr2[] = "bcddefg";
	int ret=is_left_move(arr1, arr2);
	if (ret == 1)
		printf("Yes");
	else
		printf("No");
}