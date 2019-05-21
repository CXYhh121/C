#define _CRT_SECURE_NO_WARNINGS


//划分子序列
//#include <vector>
//#include <iostream>
//using namespace std;
//
//void count_value()
//{
//	int n = 0;
//	cin >> n;
//
//	vector<int> v;
//	v.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> v[i];
//	}
//	int ret = 1;
//	for (int i = 1; i < n - 1; ++i)
//	{
//		//找出波峰波谷
//		if (v[i - 1] <= v[i] && v[i] >= v[i + 1]
//			|| v[i - 1] >= v[i] && v[i] <= v[i + 1])
//		{
//			ret++;
//			if (i != n - 3)
//			{
//				++i;
//			}
//		}
//	}
//	cout << ret << endl;
//}
//
//int main()
//{
//	count_value();
//	return 0;
//}


//翻转一句话中的单词
//#include <string>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void reverse_string(string& s)
//{
//	vector<string> v;
//	
//	size_t start = 0;
//	size_t pos = 0;
//	do
//	{
//		pos = s.find(' ', start);
//		string str = s.substr(start, pos - start);//去每个单词，并统计次数
//		v.push_back(str);
//		start = pos + 1;
//	} while (pos < s.size());
//
//	vector<string>::reverse_iterator it = v.rbegin();
//	while (it != v.rend())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse_string(s);
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	cin >> s2;
//	while (cin >> s1)
//		s2 = s1 + " " + s2;
//	cout << s2 << endl;
//	return 0;
//}