#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//};

//练习1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
////练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//
//
//
//	/*printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));*/
//
//
//	//printf("%d\n", sizeof(struct S1));//12
//	//printf("%d\n", sizeof(struct S2));//8
//
//	return 0;
//}

//修改默认对齐数
#include <stdio.h>
#pragma pack(8)//设置默认对齐数为8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
#pragma pack(1)//设置默认对齐数为1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
int main()
{
	//输出的结果是什么？
	printf("%d\n", sizeof(struct S1));//12
	printf("%d\n", sizeof(struct S2));//6
	return 0;
}