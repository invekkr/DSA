#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Convert vector to linked list
Node *arrToLL(vector<int> arr)
{
    if (arr.empty())
        return NULL;
    Node *head = new Node(arr[0]);
    Node *move = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        move->next = temp;
        move = temp;
    }
    return head;
}

// Print linked list
void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Detect cycle in linked list (Floyd's Algorithm)
bool hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = arrToLL(arr);

    // Creating a cycle manually for testing
    // 6 -> 3
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head->next->next; // Creates cycle: 6 -> 3

    if (hasCycle(head))
        cout << "Cycle detected in linked list.\n";
    else
        cout << "No cycle in linked list.\n";

    return 0;
}
