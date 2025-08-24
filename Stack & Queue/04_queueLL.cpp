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

        void dequeue(){
            if(front==NULL){
                cout<<"Queue is empty<<\n";
            }
            Node *temp = front;
            front  = front->next;

            // if(front==NULL){

            // }
            delete temp;
        }

        int getFirst(){
            if(front==NULL){
                cout<<"Queue is empty";
                return -1;
            }
            return front->data;
        }

        bool isEmpty(){
            return (front==NULL);
        }

        
};
int main(){
    
return 0;
}