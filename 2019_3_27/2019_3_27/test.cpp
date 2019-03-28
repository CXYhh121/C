#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//using namespace std;
//
//void test(void* data) 
//{
//	unsigned int value = (unsigned int)(*data);
//		printf("%u", value);
//}
//
//int main() 
//{
//	unsigned int value = 10;
//	test(&value);
//	return 0;
//}


//struct Test
//{
//	Test(int) {}
//	Test() {}
//	void fun() {}
//};
//void main(void)
//{
//	Test a(1);
//	a.fun();
//	Test b();
//	b.fun();
//}


//×Ö·û´®µÄÈ«ÅÅÁÐ?


//#include<iostream>
//#include<vector>
//#include<assert.h>
//using namespace std;
//
//
//vector<string> Permutation(char* pStr, char* pBegin)
//{
//	assert(pStr && pBegin);
//	vector<string> vstr;
//
//	if (*pBegin == '\0')
//		vstr.push_back(pStr);
//	else
//	{
//		for (char* pCh = pBegin; *pCh != '\0'; pCh++)
//		{
//			swap(*pBegin, *pCh);
//			Permutation(pStr, pBegin + 1);
//			swap(*pBegin, *pCh);
//		}
//	}
//	return vstr;
//}
//
//int main()
//{
//	char str[20] = { 0 };
//	scanf("%s", str);
//	vector<string> v = Permutation(str, str);
//	vector<string>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		//cout << "[" << *it << ",";
//	}
//	cout << "]";
//	return 0;
//}