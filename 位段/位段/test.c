#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 6;
	s.c = 4;
	s.d = 8;

	return 0;
}