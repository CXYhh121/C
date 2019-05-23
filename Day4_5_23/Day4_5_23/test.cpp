//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	v.resize(4);
//	for (int i = 0; i < 4; ++i)
//	{
//		cin >> v[i];
//	}
//	int A = 0, B = 0, C = 0;
//	A = (v[0] + v[2]) >> 1;
//	B = v[2] - A;
//	C = v[3] - B;
//
//	if (A - B != v[0] || B - C != v[1])
//		cout << "No" << endl;
//	else
//		cout << A <<" "<<B<<" "<<C<< endl;
//	return 0;
//}



//10进制转换为其他任何进制
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s = "";
//	string tables = "0123456789ABCDEF";
//	int M, N;
//	cin >> M >> N;
//
//	if (M == 0)
//	{
//		s = "0";
//	}
//
//	while (M)
//	{
//		if (M < 0)
//		{
//			M = -M;
//			cout << "-";
//		}
//
//		s = tables[M%N] + s;
//		M /= N;
//	}
//
//	cout << s.c_str() << endl;
//	return 0;
//}
