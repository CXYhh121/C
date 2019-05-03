#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
using namespace std;

//二分查找
//class Solution
//{
//public:
//	int bsearch(int data[], int x, int y, int v) {
//		int m;
//		while (x <= y){ //1
//			m = x + (y - x) / 2; //2
//			if (data[m] == v) return m; //3
//			else if (data[m] > v) y = m - 1; //4
//			else x = m + 1; //5
//		}
//		return -1; //6
//	}
//};
//
//int main()
//{
//	Solution s;
//	int data[] = { 5, 6, 7, 3, 2, 6, 8, 0 };
//	int ret = s.bsearch(data, 0, sizeof(data) / sizeof(data[0]), 3);
//	cout << ret << endl;
//}

//struct st_t {
//	int status;
//	short *pdata;
//	char errstr[32];
//};
//
//
//int main()
//{
//	st_t st[16];
//	char *p = (char *)(st[2].errstr + 32);
//	cout << (p - (char *)(st)) << endl;
//	return 0;
//}


//struct HAR { int x, y; struct HAR *p; } h[2];
//int main()
//{
//	h[0].x = 1; h[0].y = 2;
//	h[1].x = 3; h[1].y = 4;
//	h[0].p = &h[1]; h[1].p = h;
//	cout << (h[0].p)->x << endl;
//	cout << (h[1].p)->y << endl;
//
//	return 0;
//}



//int main()
//{
//	int i, n = 0;
//	float x = 1, y1 = 2.1 / 1.9, y2 = 1.9 / 2.1;
//	for (i = 1; i < 22; i++)
//		x = x * y1;
//	while (x != 1.0)
//	{
//		x = x * y2; n++;
//	}
//	printf(" %d\n ", n);
//	return 0;
//}


//char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//char **cp[] = { c + 3, c + 2, c + 1, c };
//char ***cpp = cp;
//
//int main(void)
//{
//	printf("%s", **++cpp);
//	printf("%s", *--*++cpp + 3);
//	printf("%s", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//将数组中的奇数都放在偶数前面
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//
//		for (int i = 0; i < array.size(); i++)
//		{
//			for (int j = array.size() - 1; j>i; j--)
//			{
//				if (array[j] % 2 == 1 && array[j - 1] % 2 == 0) //前偶后奇交换
//				{
//					swap(array[j], array[j - 1]);
//				}
//			}
//		}
//	}
//};
//
//int main()
//{
//	vector<int> v;
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(8);
//	v.push_back(3);
//	v.push_back(9);
//	v.push_back(5);
//
//	for (auto& e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	Solution s;
//	s.reOrderArray(v);
//
//	for (auto& e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}



//二叉树中和为某一值的路径
/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
//class Solution {
//public:
//	void _FindPath(TreeNode* root, int sum, vector<int>& tmp, vector<vector<int>>& ans)
//	{
//		if (root == NULL)
//			return;
//		tmp.push_back(root->val);
//		if (root->left == NULL && root->right == NULL)
//		{
//			if (sum - root->val == 0)
//				ans.push_back(tmp);
//			tmp.pop_back();
//			return;
//		}
//		_FindPath(root->left, sum - root->val, tmp, ans);
//		_FindPath(root->right, sum - root->val, tmp, ans);
//
//		tmp.pop_back();
//	}
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//		vector<int> tmp;
//		vector<vector<int>> ans;
//		_FindPath(root, expectNumber, tmp, ans);
//		return ans;
//	}
//};