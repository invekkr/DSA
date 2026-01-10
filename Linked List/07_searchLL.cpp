#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data;
        temp = temp->next;
    }
}
bool searchLL(Node* head, int d){
    Node* temp = head;
    while(temp){
        int val = temp->data;
        if(val == d)    return true;
        temp = temp->next;
    }
    return false;
}
int main(){
    Node* first = new Node(101);
    Node* second = new Node(2);
    Node* third = new Node(4);
    Node* fourth = new Node(84);
    first->next = second;
    second->next = third;
    third->next = fourth;

    printLL(first);
    cout<<endl;

    bool ans = searchLL(first, 0);
    cout<<ans;
return 0;
}