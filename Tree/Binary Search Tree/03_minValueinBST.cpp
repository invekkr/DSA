// https://www.naukri.com/code360/problems/minimum-element-in-bst_8160462?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node() : data(0), left(nullptr), right(nullptr) {};
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
};

int minVal(Node *root)
{
    // Write your code here.
    if (!root)
        return -1;
    int mini = 0;
    Node *temp = root;
    while (temp != NULL)
    {
        mini = temp->data;
        temp = temp->left;
    }
    return mini;
}
int main()
{

    return 0;
}