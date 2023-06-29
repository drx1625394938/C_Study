#define _CRT_SECURE_NO_WARNINGS 
////输入 两个数，例如2 5 ，计算并打印 2 +22+222+2222+22222的值 a ,n
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

//求出0-100000内所有的水仙花数 153 n(3)位数，1*1*1+5*5*5+3*3*3=153
#include<math.h>
//int main() 
//{
//	for (int i = 0; i <= 10000000; i++) 
//	{
//	//1.求i的位数n
//	//2.求每一位的幂次和
//	//3.比较
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

//打印菱形
//int main() 
//{
//	int line = 0;
//	scanf("%d", &line);
//	for(int i=1;i<=line;i++)
//}

//喝汽水问题 一瓶汽水1元钱，两个空瓶换一瓶汽水，一共n块钱，能喝多少瓶水
//空瓶子换水函数
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
//	return 1;//借一瓶喝，两个瓶子换来的汽水还给老板
//	
//}
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n + num(n));
//}

//将数组子偶数分开，前面放奇数，后面放偶数--实现思路，双指针：前面找偶数，后面找奇数，然后交换
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

//实现一个函数，可以左旋字符串中的k个字符 ABCD 2 CDBA,暴力求解法（不是最优）
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

//三步翻转法
//1.拆开来 逆序
//2.生下来的也逆序
//3.合起来再逆序 ab cdefg
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

//判断一个字符串是不是另外一个字符串左旋得到的
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