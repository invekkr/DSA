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
    vector<int> postorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st;
        vector<int> ans;
        if (root == NULL)
            return ans;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *temp = st.top();
            ans.push_back(temp->val);
            st.pop();
            if (temp->left)
                st.push(temp->left);
            if (temp->right)
                st.push(temp->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st;
        vector<int> ans;
        if (root == NULL)
            return ans;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *temp = st.top();
            ans.push_back(temp->val);
            st.pop();
            if (temp->right)
                st.push(root->right);
            if (temp->left)
                st.push(root->left);
        }
        return ans;
    }
};
int main()
{

    return 0;
}