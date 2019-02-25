#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Checksys()
//{
//	int a = 1;
//	//返回1为小端，返回0为大端
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = Checksys();
//	if (ret == 1)
//		printf("小端\n");
//	if (ret == 0)
//		printf("大端\n");
//	return 0;
//}
//联合（共用体）
//联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
////联合变量的定义
//
//int main()
//{
//	union Un un;
//	//计算联合变量的大小
//	printf("%d\n", sizeof(un));
//	return 0;
//}


//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}


union Un
{
	char c;
	int i;
	double d;
};

int main()
{
	union Un u = { 0 };
	//u.i = 0x11223344;
	//u.c = 0x55;
	printf("%p\n", u.c);
	printf("%p\n", u.i);
	printf("%p\n", u.d);


	return 0;
}

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	u.i = 1;
//
//	if (u.c == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}