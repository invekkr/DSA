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
Node* deleteHead(Node* &head){
    if(head==NULL || head->next==NULL)  return NULL;
    Node* temp = head;
    head = head->next;
    head->back = NULL;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->back->next = NULL;
    delete temp;
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
    // first = deleteHead(first);
    first = deleteTail(first);
    printDLL(first);

return 0;
}