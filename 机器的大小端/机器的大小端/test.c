#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Checksys()
//{
//	int a = 1;
//	//����1ΪС�ˣ�����0Ϊ���
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = Checksys();
//	if (ret == 1)
//		printf("С��\n");
//	if (ret == 0)
//		printf("���\n");
//	return 0;
//}
//���ϣ������壩
//�������͵�����
//union Un
//{
//	char c;
//	int i;
//};
////���ϱ����Ķ���
//
//int main()
//{
//	union Un un;
//	//�������ϱ����Ĵ�С
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
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}