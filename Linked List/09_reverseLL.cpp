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
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Reverse linked list
Node* reverse(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = arrToLL(arr);

    cout << "Original Linked List:\n";
    printLL(head);

    Node *reversedHead = reverse(head);

    cout << "Reversed Linked List:\n";
    printLL(reversedHead);

    return 0;
}
