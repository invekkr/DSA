// https://leetcode.com/problems/symmetric-tree/description/
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool helper(TreeNode *leftNode, TreeNode *rightNode)
    {
        if (leftNode == NULL || rightNode == NULL)
            return leftNode == rightNode;

        if (leftNode->val != rightNode->val)
            return false;
        return helper(leftNode->left, rightNode->right) && helper(leftNode->right, rightNode->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        return (helper(root->left, root->right));
    }
};
int main()
{

    return 0;
}