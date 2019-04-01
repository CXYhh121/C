#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;


//LeetCode66Ã‚ º”“ª
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		for (int i = digits.size() - 1; i >= 0; i--)
//		{
//			if (digits[i] < 9)
//			{
//				digits[i] += 1;
//				break;
//			}
//			else if (digits[i] == 9 && i == 0)
//			{
//				digits[i] = 0;
//				digits.insert(digits.begin(), 1);
//			}
//			else if (digits[i] == 9)
//			{
//				digits[i] = 0;
//			}
//
//		}
//		return digits;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v;
//	v.push_back(9);
//	v.push_back(9);
//	v.push_back(9);
//	v.push_back(9);
//
//	s.plusOne(v);
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}