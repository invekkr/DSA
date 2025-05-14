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
    cout<<"LL : ";
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* insertHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    return head;

}
Node* insertTail(Node* &head, int val){
    Node* temp = head, *x = new Node(val);
    if(head==NULL){
        head = x;
        return head;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = x;
    return head;

}

int main(){
    Node* first = NULL;
    // Node* first = new Node(1);
    // Node* second = new Node(2);
    // Node* third = new Node(3);
    // Node* fourth = new Node(4);
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    int val1 = 89;
    int val2 = 99;
    printLL(first);
    first = insertHead(first,val1);
    first = insertTail(first,val2);
    printLL(first);
}
