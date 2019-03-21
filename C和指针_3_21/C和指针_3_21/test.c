#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//作用域
//int a = 10;//a文件作用域
//
//int funb(int b);//b原型作用域
//
//int func(int c)//c原型作用域
//{
//	int d = 9;//d代码作用域
//	int a;//a代码作用域
//	int funf(int g, int h);//g,h原型作用域
//	int funk(int i);
//
//	{
//		int i,j;
//	}
//}


//链接属性

//typedef char*  a;//a的链接属性是none
//int b;//b的链接属性是external
//int func(int d)//d的链接属性是none
//{
//	int e;//e的链接属性是none
//	int funf(int g);//g的链接属性是none
//}
//
//
//static int b;//b的链接属性是internal
//static int func(int d)//d的链接属性是none
//{
//	extern int e;//e的链接属性是external
//	int funf(extern int g);//g的链接属性是external
//}


//int main()
//{
//	char c[5] = { 'a', 'b', '\0','c','\0' };
//	printf("%s", c);
//	return 0;
//}

//#include <stdio.h>
//int d = 1;
//void fun(int p)
//{
//	int d = 5;
//	d += p++;
//	printf("%d", d);
//}
//main()
//{
//	int a = 3;
//	fun(a);
//	d += a++;
//	printf("%d\n", d);
//}


//int main()
//{
//	char C[5] = { 'a', 'b', '\0', 'c', '\0' };
//	printf("%s", C);
//	return 0;
//}

//int main(void)
//{
//	for (int i = 1; i<6; i++) {
//		if (i % 2 != 0) {
//			printf("#");
//			continue;
//		}
//		printf("*");
//	}
//	printf("\n");
//	return 0;
//}


