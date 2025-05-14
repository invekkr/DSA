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
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* deleteHead(Node* &head){
     if (!head) return NULL;
    Node* temp = head;
    head = temp->next;
    delete temp;

    return head;
    
}

void deleteTail(Node* &head){
    if(head==NULL || head->next==NULL)  delete head ;
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    
}

Node* deletePos(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        return deleteHead(head);
    }
    int cnt=0;
    Node* temp=head, *prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
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
    // deleteHead(first);
    //deleteTail(first);
    first = deletePos(first,1);
    printLL(first);

return 0;
}