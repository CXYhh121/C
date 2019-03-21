#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//
//class Base {
//public:
//	Base() { echo(); }
//	virtual void echo() { printf("Base"); }
//};
//
//class Derived :public Base {
//public:
//	Derived() { echo(); }
//	virtual void echo() { printf("Derived"); }
//};
//
//int main() {
//	Base* base = new Derived();
//	base->echo();
//	return 0;
//}


//#pragma pack(2)
//class BU
//{
//	int number;
//	union UBffer
//	{
//		char buffer[13];
//		int number;
//	}ubuf;
//	void foo(){}
//	typedef char*(*f)(void*);
//	enum{ hdd, ssd, blueray }disk;
//}bu;
//
//int main()
//{
//	printf("%d\n", sizeof(bu));
//	return 0;
//
//}

//#include <iostream>
//using namespace std;
//struct Foo {
//	Foo() {}
//	Foo(int) {}
//	void fun() {}
//};
//int main(void) {
//	Foo a(10); //Óï¾ä1  
//	a.fun(); //Óï¾ä2  
//	Foo b(); //Óï¾ä3  
//	b.fun(); //Óï¾ä4  
//	return 0;
//}



//void GetMemory(char **p, int num)
//{
//	if (NULL == p && num <= 0)//1
//
//		return;
//	*p = (char*)malloc(num);
//	return;
//}
//void main(void){
//	char *str = NULL;
//	GetMemory(&str, 80); //2
//	if (NULL != str){
//		strcpy(&str, "hello"); //3
//		printf(str);
//	}
//	return true; //4
//}
