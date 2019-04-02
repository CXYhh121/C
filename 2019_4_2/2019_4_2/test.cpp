#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;


//int main()
//{
//	int* pint = 0;
//	pint += 6;
//	cout << pint << endl;
//	return 0;
//}

//to_string
//#include <iostream>   // std::cout
//#include <string>     // std::string, std::to_string
//
//int main()
//{
//	std::string pi = "pi is " + std::to_string(3.1415926);
//	std::string perfect = std::to_string(1 + 2 + 4 + 7 + 14) + " is a perfect number";
//	std::cout << pi << '\n';
//	std::cout << perfect << '\n';
//	return 0;
//}


//class Solution {
//public:
//	bool isPalindrome(int x) {
//		string str = to_string(x);
//		str.reserve();
//
//		int val = stoi(str);
//		if (val == x)
//			return true;
//		else
//			return false;
//	}
//};

//验证回文数
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		string str = to_string(x);
//
//		int begin = 0;
//		int end = str.length() - 1;
//
//		while (begin < end)
//		{
//			if (str[begin] == str[end])
//			{
//				++begin;
//				--end;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (begin == end)
//			return true;
//		else
//			return false;
//	}
//};
//
//int main()
//{
//	Solution s;
//	cout << s.isPalindrome(11) << endl;
//	return 0;
//}