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

class Stack{
    public:
        Node* top;

    Stack(){
        top = NULL;
    }

    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }
        Node* temp = top;
        top = top->next;
        cout<<temp->data<<" poped "<<endl;
        delete temp;

    }

    int getTop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top == NULL;
    }

    void display() {
        Node* temp = top;
        cout << "Stack: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

};

int main(){
    Stack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);

    st.display();
    st.pop();
    st.getTop();
    st.display();
return 0;
}