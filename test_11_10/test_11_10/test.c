#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.�������ָ��ָ����һ��ָ�������ָ��
//int main()
//{
//	int*  p1[10];//p����[10]���˵��p��һ�����飬����*���˵��p��һ������10������ָ�������
//	int(*p2)[10];//p����*��ϣ�˵��p��һ��ָ�������
//	//Ȼ����[10]���˵��p��һ��ָ���СΪ10�����α��������������ָ��
//	int arr[10];
//	int *arr2[10];
//	int(*p)[10] = &arr;
//	//p = &arr2;//���ܳɹ�����Ϊ&arr2������Ϊint*��*��[10]
//	int* (*p2)[10] = &arr2;//���Գɹ�
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//���002EF9B8
//	printf("%p\n", &arr);//���002EF9B8
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//���003EFAA8
//	printf("%p\n", &arr);//���003EFAA8
//
//	printf("%p\n", arr + 1);//003EFAAC��һ����4���ֽڣ���һ��Ԫ��
//	printf("%p\n", &arr + 1);//003EFAD0��һ����40���ֽڣ�����������
//	return 0;
//}
//��������˵����Ȼarr��&arrֵ��һ���ģ���������ʾ����˼�ǲ�һ����
//ʵ����&arrָ��������ĵ�ַ��arrָ����������Ԫ�صĵ�ַ�����arr+1����һ��Ԫ�صĴ�С��&arr+1����һ������Ĵ�С
//
//����ָ���ʹ��
//void print_arr1(int (*p)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ",*((*p+i)+j));
//		}
//	}
//	printf("\n");
//}
//void print_arr2(int arr[3][5],int row,int col)
//{
//	int i = 0;
//	for (i = 0; i < row ; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//������arr��ʾ����������Ԫ�صĵ�ַ����ά�������Ԫ����ָ��ά����ĵ�һ��
//	//���ﴫ�ε�arr��ʵ��ָ��ά�����һ�еĵ�ַ����һ��һά����ĵ�ַ������������ָ��������
//	print_arr2(arr, 3, 5);
//	return 0;
//}
//
//
//2.��⺯��ָ��Ͷ���
//�������Ǻ����ĵ�ַ����*test())
//&������Ҳ�Ǻ����ĵ�ַ(*&test())
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);//00FA11E5
//	printf("%p\n", &test);//00FA11E5
//	return 0;
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int) = &Add;
//	printf("%d\n", p(1, 2));//���3��pΪָ������ָ�룬����Ϊint��*����int��int��
//	return 0;
//}
//(*(void(*)())0)()
//��⣺1��void(*)()ָ����һ����������Ϊvoid�ĺ���ָ������
//      2����void(*)()��0ָ���ǽ�0ǿ������ת��Ϊ����ָ������
//      3��(*(void(*)())0)()ָ���ǵ���0��ַ���޲�����������Ϊvoid�ĺ���
//void (*signal(int ,void(*)(int)))(int)
//��⣺1��signal(int ,void(*)(int))��ָһ��������������һ��int���ͺ�һ������ָ������
//      2��signal�ķ�������Ϊvoid��*����int��
//signal��һ�����������������Ĳ�������������һ��Ϊint���ڶ���Ϊ����ָ�룬
//��ָ��ָ��ĺ�����һ������������Ϊint,�����ķ�������Ϊvoid��signal�ķ�������Ϊ����ָ������
//��ָ��ָ��ĺ�����һ������������Ϊint�������ķ�������Ϊvoid
//void (*signal(int ,void(*)(int)))(int)�ĸ���
//typedef void(*pfun_t)(int)//���ֱ�����*��һ��
//pfun_t signal(int,pfun_t)//pfun_tָ����void(*)(int)
//
//3.��⺯��ָ������Ͷ��壬ת�Ʊ�
//�������ĵ�ַ�浽һ��������������ͽ�������ָ������int (*parr1[10])()
//����ָ�������Ӧ�ã�ת�Ʊ�(������)
//void Calc(int(*pfun)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������������������>");
//	scanf("%d%d", &x, &y);
//	ret = pfun(x, y);
//
//}
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//void menu()
//{
//	printf("*************************************\n");
//	printf("****  1.Add          2.Sub       ****\n");
//	printf("****  3.Mul          4.div       ****\n");
//	printf("*************************************\n");
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void Cale(int(*pfun)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������������������");
//	scanf("%d%d", &x, &y);
//	ret = pfun(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", input);
//		switch (input)
//		{
//		case ADD:
//			Cale(Add);
//			break;
//		case SUB:
//			Cale(Sub);
//			break;
//		case MUL:
//			Cale(Mul);
//			break;
//		case DIV:
//			Cale(Div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("����������������룡");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*pfun[5])(int x, int y) = { 0, Add, Sub, Mul, Div };
//	while (input)
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			int ret = pfun[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("����������������룡");
//		}
//	} 
//	return 0;
//}
//
//4.���ָ����ָ�������ָ��Ͷ���
//ָ����ָ�������ָ����һ��ָ�룬ָ��һ�����飬���������洢���Ǻ���ָ��
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//����ָ��
//	void(*pfun)(const char*) = test;
//	//����ָ������
//	void(*ppfun[5])(const char*);
//	ppfun[0] = test;
//	//ָ����ָ�������ָ��
//	void(*(*ppfun_t)[5])(const char*) = &ppfun;
//}
//char* test1(int a, int* b)
//{
//	printf("haha\n");
//}
//char* test2(int a, int* b)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//����ָ��
//	char* (*pfun)(int, int*) = test1;
//	//����ָ������
//	char* (*pfun_t[10])(int, int*) = { test1, test2 };
//	//ָ����ָ�������ָ��
//	char* (*(*ppfun_t)[10])(int, int*) = &pfun_t;
//}
//5.���ص�������ʹ��
//�ص���������һ��ͨ������ָ����õĺ���������Ѻ�����ָ�루��ַ����Ϊ����
//���ݸ���һ������,�����ָ�뱻������������ָ��ĺ���ʱ����ͽ����ص�������
//
//qsort������ʹ��
//#include<stdlib.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return(*(int *)p1 - *(int*)p2);
//}
//int main()
//{
//	int arr[] = { 1,4, 3, 2, 6, 5, 7, 8, 9, 10 };
//	int i = 0;
//	//void qsort(void *base, size_t num, size_t width, 
//	//int(__cdecl *compare)(const void *elem1, const void *elem2));
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//6.��ɿ��ô������ϰ��
//7.��ϰʹ��qsort��������������͵����ݡ�
//#include<stdlib.h>
//#include<string.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return(*(char *)p1 - *(char*)p2);
//}
//int main()
//{
//	char arr[] = "acbdfeqg";
//	qsort(arr, strlen(arr), sizeof(char), int_cmp);
//	printf("%s\n", arr);
//	return 0;
//}


//1.���
//һ��ָ��
//int main()
//{
//	//�ַ���ָ���һ��ʹ��
//	/*char p = 'w';
//	char *pc = &p;
//	*pc = 'w';
//	return 0;*/
//	//�ַ���ָ�����һ��ʹ��
//	const char* pstr = "hello bit";
//	printf("%s\n", pstr);
//	return 0;
//}
//
//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char *str3 = "hello world";
//	char *str4 = "hello world";
//
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	return 0;
//}
//str3��str4ָ�����ͬһ���ַ������������ַ��ͳ������ڴ��в��ᱻ�ı�
//�����ڴ���ֻ�Ὺ��һ��ռ�������str3��str4��ָ�����ݣ����str3��str4ָ��ͬһ���ڴ�����
//str1[]��str2[]����ͬ���ַ��ͳ���ȥ��ʼ��ʱ���ٵ��ǲ�ͬ���ڴ�飬���str1��str2��ͬ
//����ָ��
//����ָ����ָ��һ��ָ���ַ��ָ��
//����ָ���������int*��char*��float*��double*��
//int main()
//{
//	//����ָ���ʹ��
//	const char* pstr = "hello bit";
//	const char** ppstr = &pstr;
//	printf("%s\n", *ppstr);
//	return 0;
//}
//ָ�������
//ָ�������ֺ��壬һ����Ϊ�������ͣ�������Ϊʵ�塣
//
//ָ����Ϊʵ�壬��һ����������һ���ڴ��ַ�ļ���������еı�����
//ָ��һ������ڱȽϵײ�ĳ�����������У���C���ԡ�
//�߲��������Javaһ�������ָ�룬�������á�
//
//ָ����Ϊ��������
//ָ����Ϊ�������ͣ����Դ�һ���������͡�һ���������ͻ���һ�����걸�����е�����
//���е������������ͳ�֮Ϊ���������ͣ�referenced type����
//���������ڴ�������ͬ�������ݵļ��ϡ�
//
//
//
//ָ������ָ����һ�����ָ�������
//int* arr1[10];  //�������ָ�������
//char* arr2[5];  //����ַ���ָ�������
//char** arr3[5];  //��Ŷ����ַ���ָ�������
//*arr1//���ʵ����ĸ��ֽ�
//*&arr1//���ʵ���40���ֽڣ�&arr1������Ϊ int* [10]����ָ������
//
//
//
//��ɿ��ô������ϰ��
//
