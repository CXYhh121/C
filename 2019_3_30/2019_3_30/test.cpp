#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//整数反转

//class Solution {
//public:
//	int reverse(int x) {
//		int a = 0;
//		long ret = 0;
//		while (x != 0)
//		{
//			a = x % 10;
//			x = x / 10;
//			ret = ret * 10 + a;
//
//			if (ret < INT_MIN || ret > INT_MAX)
//				return 0;
//		}
//
//		return (int)ret;
//	}
//};
//
//int main()
//{
//
//	Solution s;
//	s.reverse(1234);
//	return 0;
//}

//回文数

//class Solution {
//public:
//	int reverse(int x) {
//		int a = 0;
//		long ret = 0;
//		while (x != 0)
//		{
//			a = x % 10;
//			x = x / 10;
//			ret = ret * 10 + a;
//
//			if (ret < INT_MIN || ret > INT_MAX)
//				return 0;
//		}
//
//		return (int)ret;
//	}
//	bool isPalindrome(int x) {
//		if (x < 0)
//			return false;
//		int ret = reverse(x);
//
//		if (ret == x)
//			return true;
//		else
//			return false;
//	}
//};