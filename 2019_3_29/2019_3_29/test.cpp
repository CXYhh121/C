#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int *p1 = new int[10];//δ��ʼ����������ֵ
//	int *p2 = new int[10]();//���ù��캯������ʼ����ֵ��0
//	return 0;
//}
//��Сջ����

//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Solution
//{
//public:
//	void Push(const int& x)
//	{
//		st.push(x);
//		if (minst.empty() || minst.top() >= x)
//		{
//			minst.push(x);
//		}
//	}
//
//	void Pop()
//	{
//		if (st.top() == minst.top())
//			minst.pop();
//
//		st.pop();
//	}
//
//	const int& Top()
//	{
//		return minst.top();
//	}
//private:
//	stack<int> st;
//	stack<int> minst;
//
//};
//
//int main()
//{
//	Solution s;
//	s.Push(3);
//	s.Push(4);
//	s.Push(2);
//
//	
//	cout << s.Top() << endl;
//	return 0;
//}