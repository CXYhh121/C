#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//void main()
//{
//	int x[6], a = 0, b, c = 14;
//	do
//	{
//		x[a] = c % 2;
//		a++;
//		c /= 2;
//	} while (c >= 1);
//	for (b = a - 1; b >= 0; b--) printf("%d ", x[b]);
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int i, j = 0;
//	char a[] = " How are you!";
//	for (i = 0; a[i]; i++)
//	if (a[i] != ' ') a[j++] = a[i];
//	a[j] = '\0';
//	printf("%s\n", a);
//	return 0;
//}

//
//int main()
//{
//	int x, y;
//	x = y = 0;
//	while (x < 15) y++, x += ++y;
//	printf("%d,%d", y, x);
//	return 0;
//}


//int main()
//{
//	double  x;
//	x = 218.82631;
//	printf("%-6.2e\n", x);
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	int j = i++;
//	if ((i++ > ++j) && (++i == j)) i += j;
//	printf("%d\n", i);
//	return 0;
//}