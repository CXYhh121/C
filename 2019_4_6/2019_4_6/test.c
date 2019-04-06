#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char a = 'a', b;
//	printf("%c,", ++a);
//	printf("%c\n", b = a++);
//}

//int func(int x, int y)
//{
//	return(x + y);
//}
//
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, e = 5;
//	printf("%d\n", func((a + b, b + c, c + a), (d + e)));
//	return 0;
//}


//#include <string.h>
//#include <stdio.h>
//
//void main()
//{
//	char s[80], c = 'a';
//	int i = 0;
//	scanf("%s", s);
//	while (s[i] != '\0')
//	{
//		if (s[i] == c)
//			s[i] -= 32;
//		else if (s[i] == c - 32)
//			s[i] += 32;
//		i++;
//	}
//	puts(s);
//}

//void f(int  *x, int  *y)
//{
//	int  t;
//	t = *x; *x = *y; *y = t;
//}
//main()
//{
//	int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8 }, i, *p, *q;
//	p = a; q = &a[7];
//	while (p<q)
//	{
//		f(p, q);
//		p++;
//		q--;
//	}
//	for (i = 0; i<8; i++)
//		printf("%d,", a[i]);
//}

//int main()
//{
//	char a[7] = "abcdef";
//	char b[4] = "ABC";
//	strcpy(a, b);
//	printf("%c", a[5]);
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	int n;
//	char y[10] = "ntse";
//	char *x = y;
//	n = strlen(x);
//	*x = x[n];
//	x++;
//	printf("x=%s\n", x);
//	printf("y=%s\n", y);
//	return 0;
//}

//
//main()
//{
//	char a[7] = "a0\0a0\0"; 
//	int i, j;
//	i = sizeof(a);  j = strlen(a);
//	printf("%d  %d\n", i, j);
//}


