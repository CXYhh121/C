#define _CRT_SECURE_NO_WARNINGS


//��֤���������Ļ��Ĵ��ĸ���
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
//		for (int i = 0; i <= str1.size(); i++)//i=0ʱ������ǰ�ߣ�i=str1.size()ʱ��������
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

//��֤������������еĺ�
//�ⷨһ���������ҷ���ʱ�临�Ӷ�Ϊn��3�η�
int GetMaxAddOfArray(int *arr, int sz)
{
	int SUM = -100000;   //����һ���㹻С�����ֵ
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz; j++)
		{
			int subOfArr = 0;  //��ʱ���ֵ
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

//�ⷨ�����Խⷨһ�������죬ʱ�临�Ӷ�Ϊn��2�η�
int GetMaxAddOfArray(int *arr, int sz)
{
	int SUM = -100000;   //����һ���㹻С�����ֵ
	for (int i = 0; i < sz; i++)
	{
		int subOfArr = 0;  //��ʱ���ֵ
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

//�ⷨ������̬�滮
int GetMax(int a, int b)   //�õ������������ֵ
{
	return (a) > (b) ? (a) : (b);
}

int GetMaxAddOfArray(int* arr, int sz)
{
	if (arr == NULL || sz <= 0)
		return 0;

	int Sum = arr[0];   //��ʱ���ֵ
	int MAX = arr[0];   //�Ƚ�֮������ֵ

	for (int i = 1; i < sz; i++)
	{
		Sum = GetMax(Sum + arr[i], arr[i]);   //״̬����

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

//һ��ⷨ
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