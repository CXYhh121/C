#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.理解数组指针指的是一个指向数组的指针
//int main()
//{
//	int*  p1[10];//p先与[10]结合说明p是一个数组，再与*结合说明p是一个存了10个整形指针的数组
//	int(*p2)[10];//p先与*结合，说明p是一个指针变量，
//	//然后与[10]结合说明p是一个指向大小为10个整形变量的数组的数组指针
//	int arr[10];
//	int *arr2[10];
//	int(*p)[10] = &arr;
//	//p = &arr2;//不能成功，因为&arr2的类型为int*（*）[10]
//	int* (*p2)[10] = &arr2;//可以成功
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//输出002EF9B8
//	printf("%p\n", &arr);//输出002EF9B8
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//输出003EFAA8
//	printf("%p\n", &arr);//输出003EFAA8
//
//	printf("%p\n", arr + 1);//003EFAAC加一跳过4个字节，即一个元素
//	printf("%p\n", &arr + 1);//003EFAD0加一跳过40个字节，即整个数组
//	return 0;
//}
//上述代码说明虽然arr与&arr值是一样的，但是所表示的意思是不一样的
//实际上&arr指的是数组的地址，arr指的是数组首元素的地址，因此arr+1跳过一个元素的大小，&arr+1跳过一个数组的大小
//
//数组指针的使用
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
//	//数组名arr表示的是数组首元素的地址，二维数组的首元素是指二维数组的第一行
//	//这里传参的arr其实是指二维数组第一行的地址，是一个一维数组的地址。可以用数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}
//
//
//2.理解函数指针和定义
//函数名是函数的地址，（*test())
//&函数名也是函数的地址(*&test())
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
//	printf("%d\n", p(1, 2));//输出3，p为指向函数的指针，类型为int（*）（int，int）
//	return 0;
//}
//(*(void(*)())0)()
//理解：1、void(*)()指的是一个返回类型为void的函数指针类型
//      2、（void(*)()）0指的是将0强制类型转换为函数指针类型
//      3、(*(void(*)())0)()指的是调用0地址处无参数返回类型为void的函数
//void (*signal(int ,void(*)(int)))(int)
//理解：1、signal(int ,void(*)(int))是指一个函数，参数是一个int类型和一个函数指针类型
//      2、signal的返回类型为void（*）（int）
//signal是一个函数申明，函数的参数有两个，第一个为int，第二个为函数指针，
//该指针指向的函数有一个参数，类型为int,函数的返回类型为void，signal的返回类型为函数指针类型
//该指针指向的函数有一个参数，类型为int，函数的返回类型为void
//void (*signal(int ,void(*)(int)))(int)的改造
//typedef void(*pfun_t)(int)//名字必须与*在一起
//pfun_t signal(int,pfun_t)//pfun_t指的是void(*)(int)
//
//3.理解函数指针数组和定义，转移表
//将函数的地址存到一个数组里，这个数组就叫做函数指针数组int (*parr1[10])()
//函数指针数组的应用，转移表(计算器)
//void Calc(int(*pfun)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数：>");
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
//	printf("请输入两个操作数：");
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
//		printf("请选择：");
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
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！");
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
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			int ret = pfun[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，请重新输入！");
//		}
//	} 
//	return 0;
//}
//
//4.理解指向函数指针数组的指针和定义
//指向函数指针数组的指针是一个指针，指向一个数组，这个数组里存储的是函数指针
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针
//	void(*pfun)(const char*) = test;
//	//函数指针数组
//	void(*ppfun[5])(const char*);
//	ppfun[0] = test;
//	//指向函数指针数组的指针
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
//	//函数指针
//	char* (*pfun)(int, int*) = test1;
//	//函数指针数组
//	char* (*pfun_t[10])(int, int*) = { test1, test2 };
//	//指向函数指针数组的指针
//	char* (*(*ppfun_t)[10])(int, int*) = &pfun_t;
//}
//5.理解回调函数的使用
//回调函数就是一个通过函数指针调用的函数，如果把函数的指针（地址）作为参数
//传递给另一个函数,当这个指针被用来调用其所指向的函数时，这就叫做回调函数。
//
//qsort函数的使用
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
//6.完成课堂代码和练习。
//7.练习使用qsort函数排序各种类型的数据。
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


//1.理解
//一级指针
//int main()
//{
//	//字符型指针的一般使用
//	/*char p = 'w';
//	char *pc = &p;
//	*pc = 'w';
//	return 0;*/
//	//字符型指针的另一种使用
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
//str3和str4指向的是同一个字符常量，由于字符型常量在内存中不会被改变
//所以内存中只会开辟一块空间来储存str3和str4所指的内容，因此str3与str4指向同一个内存区域
//str1[]和str2[]用相同的字符型常量去初始化时开辟的是不同的内存块，因此str1与str2不同
//二级指针
//二级指针是指向一级指针地址的指针
//二级指针的类型有int*，char*，float*，double*等
//int main()
//{
//	//二级指针的使用
//	const char* pstr = "hello bit";
//	const char** ppstr = &pstr;
//	printf("%s\n", *ppstr);
//	return 0;
//}
//指针和数组
//指针有两种含义，一是作为数据类型，二是作为实体。
//
//指针作为实体，是一个用来保存一个内存地址的计算机语言中的变量。
//指针一般出现在比较底层的程序设计语言中，如C语言。
//高层的语言如Java一般避免用指针，而是引用。
//
//指针作为数据类型
//指针作为数据类型，可以从一个函数类型、一个对象类型或者一个不完备类型中导出。
//从中导出的数据类型称之为被引用类型（referenced type）。
//数组是用于储存多个相同类型数据的集合。
//
//
//
//指针数组指的是一个存放指针的数组
//int* arr1[10];  //存放整形指针的数组
//char* arr2[5];  //存放字符型指针的数组
//char** arr3[5];  //存放二级字符型指针的数组
//*arr1//访问的是四个字节
//*&arr1//访问的是40个字节，&arr1的类型为 int* [10]数组指针类型
//
//
//
//完成课堂代码和练习。
//
