#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct S
//{
//	int a;
//	char arr[]; //��������
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
struct S
{
	int a;
	char arr[];//��������
};

struct B
{
	int a;
	char* arr;
};

void Test1()
{

	//Ϊ�ṹ�嶯̬���ٿռ䣬ǰ�벿�ֿ��Ŀռ��С��4���ֽڣ���벿���Ǹ���������arr���ٵĿռ�
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 100 * sizeof(char));
	struct S* ptr = NULL;
	ps->a = 20;
	strcpy(ps->arr, "abcdefg");

	printf("��������:%d\n", ps->a);
	printf("��������:%s\n", ps->arr);

	//���Ǿ����������鿪��100�ֽڲ���ʹ�ã�������reallocΪ�����¿��ٿռ�
	ptr = (struct S*)realloc(ps, sizeof(struct S) + 200 * sizeof(char));
	if (ptr != NULL)
		ps = ptr;


	free(ps);
	ps = NULL;	
}

void Test2()
{
	//��Ϊ�ṹ��B���ٿռ䣬Ϊ8���ֽ�
	struct B* ps = (struct B*)malloc(sizeof(struct B));
	char* ptr = NULL;
	//��ʱΪ�ṹ���е�ָ��arr��̬���ٿռ�
	ps->arr = (char*)malloc(sizeof(char)* 100);

	ps->a = 20;
	strcpy(ps->arr, "abcdefg");

	printf("ָ��:%d\n", ps->a);
	printf("ָ��:%s\n", ps->arr);

	//���Ǿ���ָ��ָ��Ŀռ俪��100�ֽڲ���ʹ�ã�������reallocΪ�����¿��ٿռ�
	ptr = (char*)realloc(ps->arr, 200 * sizeof(char));
	if (ptr != NULL)
		ps->arr = ptr;

	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
}


int main()
{
	Test1();
	Test2();
	return 0;

}