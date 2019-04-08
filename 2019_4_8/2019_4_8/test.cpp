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
//		f(); //Óï¾ä1
//	}
//};
//void main()
//{
//	C obj;
//	obj.f(); //Óï¾ä2
//	obj.A::f(); //Óï¾ä3
//	obj.B::f(); //Óï¾ä4
//	obj.g(); //Óï¾ä5
//}