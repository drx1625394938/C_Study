

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	int num = 10;
	printf("%c\n", '\132');//\ddd 输出一个八进制转换成十进制后，作为ASCII所对应的字符
	printf("%d\n", &num);
	printf("%c\n", 'h');
	printf("%c\n", '\x14');//\xdd 输出一个\ddd 输出一个八进制转换成十进制后，作为ASCII所对应的字符十六进制转换成十进制后，作为ASCII所对应的字符
	printf("%d\n", sizeof(int));
	int a = 0;
	printf("%d\n", sizeof(a));

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	while (a < 10) 
	{
		printf("%d\n", arr[a]);
		a++;
	}
	//操作符
	//1.算数操作符
	//2.位移操作符：<<向左位移符   >>向右位移符
	//	位移操作符移动的是二进制位
	int b= 5;//转为二进制就是101；
	b = b<<1;//101左移一位就是1010，结果就是10；
	printf("%d\n", b);
	//3.按位运算符：&(与) |（或） ^（异或） ~
	//按位运算符也是二进制位
	int c = 5;//0101;
	int d = 10;//1010;
	//&有0就是0，全1才是1；
	//|有1就是1，全0才是0；
	//^相同为0.不同为1；
	//~按位去反，0变1，1变0；
	int res = c & d;
	int res1 = ~res;
	printf("%d\n", res);
	printf("%d\n", res1);
	//逻辑运算符：|| &&
	//用于条件语句中的条件判断，既满足&&其中一个满足||

	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("%d\n", max);
	return 0;	
}
int Max(int num1,int num2) 
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}