#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//	{
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	cout << (func());
//}


//int Function(unsigned int n) {
//
//	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
//	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
//	n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
//	n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
//	n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);
//
//	return n;
//}
//
//int main()
//{
//	cout << Function(197);
//	return 0;
//}

//#include <iostream>
//using namespace std;

//int main() {
//	int i, u[4], v[4], x, y = 10;
//	for (i = 0; i <= 3; i++) {
//		cin >> u[i];
//	}
//	v[0] = (u[0] + u[1] + u[2] + u[3]) / 7;
//	v[1] = u[0] / ((u[1] - u[2]) / u[3]);
//	v[2] = u[0] * u[1] / u[2] * u[3];
//	v[3] = v[0] * v[1];
//	x = (v[0] + v[1] + 2) - u[(v[3] + 3) % 4];
//	if (x > 10)
//		y += (v[2] * 100 - v[3]) / (u[u[0] % 3] * 5);
//	else
//		y += 20 + (v[2] * 100 - v[3]) / (u[v[0] % 3] * 5);
//	cout << x << "," << y << endl;
//	return 0;
//}


//class A
//{
//	int _a;
//public:
//	A(int a) : _a(a)
//	{
//	}
//	friend int f1(A &);
//	friend int f2(const A &);
//	friend int f3(A);
//	friend int f4(const A);
//};
//
//
//int main()
//{
//	A a(0);
//	f1(a);
//	f2(0);
//	f3(0);
//	f4(0);
//	return 0;
//}

//¼ÆËãì³²¨À­ÆõÊý
//class Solution {
//public:
//	int Fibonacci(int n) {
//		if (n == 0)
//			return 0;
//		int result;
//		int prev_value;
//		int next_value;
//
//		result = prev_value = 1;
//
//		while (n > 2)
//		{
//			n -= 1;
//			next_value = prev_value;
//			prev_value = result;
//			result = prev_value + next_value;
//		}
//		return result;
//	}
//};





//int func(int x)
//{
//	int count = 0;
//	x = 9999;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	cout<<func(0);
//	return 0;
//}

//int f(int a, char* b)
//{
//
//}
//
//int main()
//{
//	int (*p)(int, char*);
//	p = &f;
//
//	return 0;
//}


//int main()
//{
//	char *p[10];
//	char(*p1)[10];
//
//	cout << sizeof(p) << endl;
//	cout << sizeof(p1) << endl;
//
//	return 0;
//}

//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	int *p[] = { a, a + 1, a + 2, a + 3 };
//	int **q = p;
//
//	cout << *(p[0] + 1) + **(q + 2) << endl;
//	return 0;
//}

//int main()
//{
//http://www.taonao.com
//	cout << "wellcome to taobao" << endl;
//	return 0;
//}


//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//	{
//		return n;
//	}
//	n = n + i;
//	i++;
//	return f(n);
//}
//
//int main()
//{
//	cout << f(1) << endl;
//	return 0;
//}

