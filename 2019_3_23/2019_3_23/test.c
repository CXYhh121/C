#define _CRT_SECURE_NO_WARNINGS



//int main()
//{
//	char* p = "hello";
//	*(p + 1) = 'w';
//	return 0;
//}


//int main()
//{
//	unsigned int a = 10;
//	char b = 1;
//	unsigned char c = -1;
//	if (a > b)
//		printf("%c\n", 'a');
//	else
//		printf("%c\n", 'b');
//
//	return 0;
//}
#include <stdio.h>
//struct xx
//{
//	long long _x1;
//	char _x2;
//	int _x3;
//	char _x4[2];
//	//static int _x5;
//}xx;
//
//int main()
//{
//	/*char str[] = " ";
//	char* p = str;
//	
//	return 0;*/
//	printf("%d\n", sizeof(xx));
//
//}

//
//int fun(int n)
//{
//	static int a = 2;
//	a++;
//	return a*n;
//}
//int main()
//{
//	int k = 5;
//	int i = 2;
//	k += fun(i++);
//	k *= fun(i - 1);
//	printf("%d,%d\n", i, k);
//	return 0;
//}

//int main()
//{
//	for (int j = 0, k = -1; k = 1; j++, k++)
//		printf("****\n");
//	return 0;
//}


//main()
//{
//	int a = 0, i;
//	for (i = 1; i<5; i++)
//	{
//		switch (i)
//		{
//		case 0:
//		case 3:a += 2;
//		case 1:
//		case 2:a += 3;
//		default:a += 5;
//		}
//	}
//	printf("%d\n", a);
//}


//#include<stdio.h>
//
//int main()
//{
//	static char *s[] = { "black", "white", "pink", "violet" };
//	char **ptr[] = { s + 3, s + 2, s + 1, s }, ***p;
//	p = ptr;
//	++p;
//	printf("%s", **p + 1);
//	return 0;
//}

void foobar(int a, int *b, int **c)
{
	int *p = &a;
	*p = 101;
	*c = b;
	b = p;
}

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int *p = &c;
	foobar(a, &b, &p);
	printf("a=%d, b=%d, c=%d, *p=%d\n", a, b, c, *p);
	return (0);
}

