#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct S
//{
//	int a;
//	char arr[]; //柔性数组
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
struct S
{
	int a;
	char arr[];//柔性数组
};

struct B
{
	int a;
	char* arr;
};

void Test1()
{

	//为结构体动态开辟空间，前半部分开的空间大小是4个字节，后半部分是给柔性数组arr开辟的空间
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 100 * sizeof(char));
	struct S* ptr = NULL;
	ps->a = 20;
	strcpy(ps->arr, "abcdefg");

	printf("柔性数组:%d\n", ps->a);
	printf("柔性数组:%s\n", ps->arr);

	//若是觉得柔性数组开辟100字节不够使用，可以用realloc为其重新开辟空间
	ptr = (struct S*)realloc(ps, sizeof(struct S) + 200 * sizeof(char));
	if (ptr != NULL)
		ps = ptr;


	free(ps);
	ps = NULL;	
}

void Test2()
{
	//先为结构体B开辟空间，为8个字节
	struct B* ps = (struct B*)malloc(sizeof(struct B));
	char* ptr = NULL;
	//此时为结构体中的指针arr动态开辟空间
	ps->arr = (char*)malloc(sizeof(char)* 100);

	ps->a = 20;
	strcpy(ps->arr, "abcdefg");

	printf("指针:%d\n", ps->a);
	printf("指针:%s\n", ps->arr);

	//若是觉得指针指向的空间开辟100字节不够使用，可以用realloc为其重新开辟空间
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