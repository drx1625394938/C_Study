

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
	printf("%c\n", '\132');//\ddd ���һ���˽���ת����ʮ���ƺ���ΪASCII����Ӧ���ַ�
	printf("%d\n", &num);
	printf("%c\n", 'h');
	printf("%c\n", '\x14');//\xdd ���һ��\ddd ���һ���˽���ת����ʮ���ƺ���ΪASCII����Ӧ���ַ�ʮ������ת����ʮ���ƺ���ΪASCII����Ӧ���ַ�
	printf("%d\n", sizeof(int));
	int a = 0;
	printf("%d\n", sizeof(a));

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	while (a < 10) 
	{
		printf("%d\n", arr[a]);
		a++;
	}
	//������
	//1.����������
	//2.λ�Ʋ�������<<����λ�Ʒ�   >>����λ�Ʒ�
	//	λ�Ʋ������ƶ����Ƕ�����λ
	int b= 5;//תΪ�����ƾ���101��
	b = b<<1;//101����һλ����1010���������10��
	printf("%d\n", b);
	//3.��λ�������&(��) |���� ^����� ~
	//��λ�����Ҳ�Ƕ�����λ
	int c = 5;//0101;
	int d = 10;//1010;
	//&��0����0��ȫ1����1��
	//|��1����1��ȫ0����0��
	//^��ͬΪ0.��ͬΪ1��
	//~��λȥ����0��1��1��0��
	int res = c & d;
	int res1 = ~res;
	printf("%d\n", res);
	printf("%d\n", res1);
	//�߼��������|| &&
	//������������е������жϣ�������&&����һ������||

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