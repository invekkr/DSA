#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val, Node* n, Node* p){
            data = val;
            next = n;
            prev = p;
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
Node* arrtoDLL(vector<int>&arr){
    Node* head = new Node(arr[0],NULL,NULL);
    Node* prev = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],NULL,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    Node *head = arrtoDLL(arr);
    printDLL(head);
return 0;
}