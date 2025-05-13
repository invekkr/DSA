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
    cout<<endl;
}

void deleteHead(Node* &head){
     if (!head) return;
    Node* temp = head;
    head = temp->next;
    delete temp;
    
}
int main(){
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    first->next = second;
    second->next = third;
    third->next = fourth;

    printLL(first);
    deleteHead(first);
    printLL(first);

return 0;
}