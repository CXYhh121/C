#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

//最小二叉树深度
//class Solution {
//public:
//	int minDepth(TreeNode* root) {
//		if (root == NULL)
//			return 0;
//		if (!root->left && !root->right)
//			return 1;
//		int left = minDepth(root->left);
//		int right = minDepth(root->right);
//
//		if (!left)
//			return 1 + right;
//		if (!right)
//			return 1 + left;
//
//		return min(left, right) + 1;
//	}
//};