#define _CRT_SECURE_NO_WARNINGS


//验证满足条件的回文串的个数
//#include<iostream>
//#include<string>
//using namespace std;
//bool isPalindrome(string str)
//{
//	int begin = 0;
//	int end = str.size() - 1;
//	while (begin <= end)
//	{
//		if (str[begin] == str[end])
//		{
//			begin++;
//			end--;
//		}
//		else
//			break;
//	}
//	if (begin<end)
//		return false;
//	else
//		return true;
//}
//
//int main()
//{
//	string str1, str2;
//	while (cin >> str1 && cin >> str2)
//	{
//	//cin >> str1;
//	//cin >> str2;
//		int cnt = 0;
//		for (int i = 0; i <= str1.size(); i++)//i=0时插入最前边，i=str1.size()时插入最后边
//		{
//			string str3 = str1;
//			str3.insert(i, str2);
//			if (isPalindrome(str3))
//				cnt++;
//		}
//		cout << cnt << endl;
//	}
//
//}




#include <iostream>
#include <string>

using namespace std;

//验证最大连续子序列的和
//解法一，暴力查找法，时间复杂度为n的3次方
int GetMaxAddOfArray(int *arr, int sz)
{
	int SUM = -100000;   //给定一个足够小的最大值
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz; j++)
		{
			int subOfArr = 0;  //临时最大值
			for (int k = i; k <= j; k++)
			{
				subOfArr += arr[k];
			}

			if (subOfArr > SUM)
			{
				SUM = subOfArr;
			}
		}
	}
	return SUM;
}

//解法二，对解法一稍作改造，时间复杂度为n的2次方
int GetMaxAddOfArray(int *arr, int sz)
{
	int SUM = -100000;   //给定一个足够小的最大值
	for (int i = 0; i < sz; i++)
	{
		int subOfArr = 0;  //临时最大值
		for (int j = i; j < sz; j++)
		{
			subOfArr += arr[j];

			if (subOfArr > SUM)
			{
				SUM = subOfArr;
			}
		}
	}
	return SUM;
}

//解法三，动态规划
int GetMax(int a, int b)   //得到两个数的最大值
{
	return (a) > (b) ? (a) : (b);
}

int GetMaxAddOfArray(int* arr, int sz)
{
	if (arr == NULL || sz <= 0)
		return 0;

	int Sum = arr[0];   //临时最大值
	int MAX = arr[0];   //比较之后的最大值

	for (int i = 1; i < sz; i++)
	{
		Sum = GetMax(Sum + arr[i], arr[i]);   //状态方程

		if (Sum >= MAX)
			MAX = Sum;
	}
	return MAX;
}

int main()
{
	int array[] = { 2, 3, -6, 4, 6, 2, -2, 5, -9 };
	int sz = sizeof(array) / sizeof(array[0]);
	int MAX = GetMaxAddOfArray(array, sz);
	cout << MAX << endl;
	return 0;
}

//一般解法
int GetMaxAddOfArray(int* arr, int sz)
{
	if (arr == NULL || sz <= 1)
		return 0;
	int MAX = arr[0];
	int sum = arr[0];
	for (int i = 1; i < sz; i++)
	{
		if (sum < 0)
			sum = arr[i];
		else
		{
			sum += arr[i];
		}

		if (sum > MAX)
			MAX = sum;
	}
	return MAX;
}