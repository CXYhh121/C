#define _CRT_SECURE_NO_WARNINGS


//char buffer[6] = { 0 };
//char *mystring(){
//	char *s = "Hello world";
//	for (int i = 0; i<(sizeof(buffer)-1); i++){
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//int main()
//{
//	printf("%s\n", mystring());
//	return 0;
//}


//void sca_from_file(int a[], int n, char fn[])
//{
//	FILE *fp;
//	int i;
//	fp = fopen(fn, "r");
//	for (i = 0; i < n; i++)
//	{
//		fscanf(fp, "%d", &a[i]);
//	}
//	fclose(fp);
//}
//
//int main()
//{
//	return 0;
//}


//#include<stdio.h>


//int main()
//{
//	const char str1[] = "abc";
//	const char str2[] = "abc";
//	const char *p1 = "abc";
//	const char *p2 = "abc";
//
//	printf("%d %d %d %d\n", str1, str2, p1, p2);
//	return 0;
//}


//void foo(int b[][3])
//{
//	++b;
//	b[1][1] = 9;
//}
//void main()
//{
//	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	foo(a);
//	printf("%d", a[2][1]);
//}