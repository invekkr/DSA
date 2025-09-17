// https://www.geeksforgeeks.org/problems/check-if-two-nodes-are-cousins/1
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    // Function to check if two nodes are cousins in a tree
    bool checkParent(Node *root, int a, int b)
    {
        if (root == NULL)
            return 0;
        if (root->left && root->right)
        {
            if (root->left->data == a && root->right->data == b)
                return 1;
            if (root->left->data == b && root->right->data == a)
                return 1;
        }
        return (checkParent(root->left, a, b) || checkParent(root->right, a, b));
    }
    bool isCousins(Node *root, int x, int y)
    {
        if (!root)
            return false;
        if (x == y)
            return false;

        int l1 = -1, l2 = -1;
        int l = 0;
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                Node *temp = q.front();
                q.pop();

                if (temp->data == x)
                    l1 = l;
                if (temp->data == y)
                    l2 = l;

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            if (l1 != -1 && l2 != -1)
                break;
            l++;
        }

        if (l1 == -1 || l2 == -1)
            return false;
        if (l1 != l2)
            return false;

        return !checkParent(root, x, y);
    }
};
int main()
{

    return 0;
}