#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//class B
//{
//public:
//	virtual void Fun(){}
//};
//class D : public B
//{
//public:
//	void Fun(){}
//};
//
//
//int main()
//{
//	D dd;
//	B* pb = &dd;
//	D* pd = &dd;
//	pb->Fun();
//	pd->Fun();
//	return 0;
//}



//��������һ�ĸ���
class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		for (int i = 0; i < 32; i++)
		{
			if (n >> i & 1)
				count++;
		}
		return count;
	}
};