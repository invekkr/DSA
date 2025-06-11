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

Node* arrToLL(vector <int> arr){
    Node* head  = new Node(arr[0]);
    Node* move = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        move->next = temp;
        move = temp;
    }
    return head;
}
void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector <int> arr = {1,2,3,4,5};
    Node *head = arrToLL(arr);
    printLL(head);
    cout<<endl;
return 0;
}