#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//};

//��ϰ1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////��ϰ2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
////��ϰ3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////��ϰ4-�ṹ��Ƕ������
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

//�޸�Ĭ�϶�����
#include <stdio.h>
#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
int main()
{
	//����Ľ����ʲô��
	printf("%d\n", sizeof(struct S1));//12
	printf("%d\n", sizeof(struct S2));//6
	return 0;
}