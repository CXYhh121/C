#define _CRT_SECURE_NO_WARNINGS 1

//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
//将这组数据进行排序之后相邻两个数进行比较，不相同则这个数只出现了一次
#include<stdio.h>
//void sort(int arr[], int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		if (arr[j]>arr[j + 1])
//		{
//			int tmp;
//			tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
//void func(int arr[], int n, int *num1, int *num2)
//{
//	int  tmp = 0;
//	for (int i = 0; i < n; i += 2)
//	{
//		if (arr[i] == arr[i + 1])
//			continue;
//		else
//		{
//			if (tmp == 0)
//			{
//				*num1 = arr[i];
//				i = i + 1;
//			}
//			else if (tmp == 1)
//			{
//				*num2 = arr[i];
//				i = i + 1;
//			}
//			tmp++;
//		}
//	}
//}
//
//int main()
//{
//	int a[10] = { 1, 4, 5, 8, 56, 4, 8, 5, 7, 1 }; //56 7
//	sort(a, 10);
//	int num1, num2;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	func(a, 10, &num1, &num2);
//	printf("两个只出现一次的数是%d和%d\n", num1, num2);
//	//system("pause");
//	return 0;
//}

//
//void sort(int a[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				int temp = 0;
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//void Found(int a[], int n,int *num1,int *num2)
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n; i+=2)
//	{
//
//		if (a[i] == a[i + 1])
//			continue;
//		else
//		{
//			if (temp == 0)
//			{
//				*num1 = a[i];
//				i += 1;
//			}
//			else if (temp == 1)
//			{
//				*num2 = a[i];
//				i += 1;
//			}
//			temp++;
//		}
//	}
//}
//void print(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	int sz = 0;
//	int num1, num2;
//	int a[10] = {1,2,4,10,2,1,3,4,8,3};
//	sz = sizeof(a) / sizeof(a[0]);
//	sort(a, sz);
//	Found(a, sz,&num1,&num2);
//	print(a, sz);
//	printf("两个只出现一次的数分别为%d和%d\n", num1, num2);
//	return 0;
//}


//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//
//#include<stdio.h>
//#define P 1 //汽水的单价
//#define N 2 //换一瓶汽水所需的空瓶个数
//
////SodaConvert函数返回用空瓶换来的汽水个数
//int SodaConvert(int x)
//{
//	int ret = x / N;//空瓶兑换的汽水个数
//	int empty = x / N + x % N;//兑换的汽水和剩下的空瓶个数之和
//	if (empty > 1)
//		return ret + SodaConvert(empty);
//	else
//		return ret;
//}
//int main()
//{
//	int p = 0;
//	int n = 0;
//	printf("请输入金额：");
//	scanf("%d", &p);
//	n = p / P;
//	int bottle = n + SodaConvert(n);//最终喝到的汽水个数
//	printf("%d瓶\n", bottle);
//	return 0;
//}

//3.模拟实现strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char * dest, const char * src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	char *c2 = "hello world!";
//	printf("c1=%s\n c2=%s\n", arr, c2);
//	my_strcpy(arr, c2);
//	printf("%s\n", my_strcpy(arr, c2));
//	return 0;
//}
//4.模拟实现strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char * dest, const char * src)
{
	char* ret = dest;
	assert(src != NULL);
	assert(dest != NULL);
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	return ret;
}
int main()
{
	char arr[20] = "abcdef";
	char *c2 = "hello world!";
	printf("c1=%s\n c2=%s\n", arr, c2);
	my_strcat(arr, c2);
	printf("%s\n", my_strcat(arr, c2));
	return 0;
}