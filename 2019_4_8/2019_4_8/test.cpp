#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//class A
//{
//public:
//	void f()
//	{
//		cout << "A::f()";
//	}
//};
//class B
//{
//public:
//	void f()
//	{
//		cout << "B::f()";
//	}
//	void g()
//	{
//		cout << "B: g()";
//	}
//};
//class C : public A, public B
//{
//public:
//	void g()
//	{
//		cout << "C::g()";
//	}
//	void h()
//	{
//		cout << "C::h()";
//		f(); //���1
//	}
//};
//void main()
//{
//	C obj;
//	obj.f(); //���2
//	obj.A::f(); //���3
//	obj.B::f(); //���4
//	obj.g(); //���5
//}