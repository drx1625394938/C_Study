#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//struct Stu
//{
//	int age;
//};
//int compare_struct(const void* a, const void* b) 
//{
//	return ((struct Stu*)a)->age - ((struct Stu*)b)->age;
//}
//int main() 
//{
//
//	struct Stu s[] = { {10},{2},{30} };
//	qsort(s, 3, sizeof(s[0]), compare_struct);
//	for (int i = 0; i < 3; i++) 
//	{
//		printf("%d ", s[i].age);
//	}
//}

//交换元素
void Swag(char* elem1,char *elem2,int width) 
{
	for (int i = 0; i < width; i++) 
	{
		char temp = *elem1;
		*elem1 = *elem2;
		*elem2 = temp;
		elem1++;
		elem2++;
	}
}
//模拟qsort写一个适合所有类型的冒泡排序
void bsort(void* base, int number, int width, int(*cmp)(const void* elem1, const void* elem2) )
{
	for (int i = 0; i < number; i++) 
	{
		for (int j = 0; j < number - i - 1; j++) 
		{
			int ret = cmp((char*)base + j * width, (char*)base + (j + 1) * width);
			if (ret > 0) 
			{	//前一个元素大于后一个元素交换
				Swag((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}

}
int cmp(const void* elem1, const void* elem2) 
{
	return *(int*)elem1 - *(int*)elem2;
}


int main() 
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	bsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(0), cmp);
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	float arr1[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0 };
	bsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(0), cmp);
	for (int i = 0; i < 10; i++)
	{
		printf("%f ", arr1[i]);
	}

}