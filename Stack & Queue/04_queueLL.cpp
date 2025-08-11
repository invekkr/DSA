#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    public:
        Node *front;
        Node *rear;

        Queue(){
            front = rear = NULL;
        }

        void enqueue(int val){
            Node* newNode = new Node(val);
            if(rear == NULL){
                front=rear=newNode;
                return;   
            };
            rear->next = newNode;
            rear = newNode;
            
        }
};
int main(){
    
return 0;
}