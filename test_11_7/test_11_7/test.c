#define _CRT_SECURE_NO_WARNINGS 1

//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//
//���������ݽ�������֮���������������бȽϣ�����ͬ�������ֻ������һ��
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
//	printf("����ֻ����һ�ε�����%d��%d\n", num1, num2);
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
//	printf("����ֻ����һ�ε����ֱ�Ϊ%d��%d\n", num1, num2);
//	return 0;
//}


//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//
//#include<stdio.h>
//#define P 1 //��ˮ�ĵ���
//#define N 2 //��һƿ��ˮ����Ŀ�ƿ����
//
////SodaConvert���������ÿ�ƿ��������ˮ����
//int SodaConvert(int x)
//{
//	int ret = x / N;//��ƿ�һ�����ˮ����
//	int empty = x / N + x % N;//�һ�����ˮ��ʣ�µĿ�ƿ����֮��
//	if (empty > 1)
//		return ret + SodaConvert(empty);
//	else
//		return ret;
//}
//int main()
//{
//	int p = 0;
//	int n = 0;
//	printf("�������");
//	scanf("%d", &p);
//	n = p / P;
//	int bottle = n + SodaConvert(n);//���պȵ�����ˮ����
//	printf("%dƿ\n", bottle);
//	return 0;
//}

//3.ģ��ʵ��strcpy
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
//4.ģ��ʵ��strcat
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