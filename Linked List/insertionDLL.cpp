#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* back;

        Node(int val, Node* n, Node* p){
            data = val;
            next = n;
            back = p;
        }
};
void printDLL(Node* head){
    Node* temp = head;
    cout<<"DLL : ";
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* insertHead(Node* &head, int val){
    Node* temp = new Node(val,head,NULL);
    head = temp;
    return head;
}
Node* insertTail(Node* &head, int val){
    Node* x = new Node(val, NULL,NULL);
    if(head==NULL){
        head = x;
        return head;
    }
    Node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = x;
    x->back = temp;
    return head;
}
int main(){
    Node* first = new Node(1,NULL,NULL);
    Node* second = new Node(2,NULL, first);
    Node* third = new Node(3,NULL, second);
    Node* fourth = new Node(4,NULL, third);

    first->next = second;
    second->next = third;
    third->next = fourth;

    printDLL(first);
    int val = 99;
    first = insertTail(first,val);
    printDLL(first);

return 0;
}