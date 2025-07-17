#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int n){
        size = n;
        arr = new int[size];
        top = -1;
    }

    void push(int x){
        if(top == size-1){
            cout<<"Stack overflow"<<endl;
        }
        arr[++top] = x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack empty"<<endl;
        }
        top--;
    }

    int topElement(){
        if(top==-1){
            cout<<"stack empty"<<endl; 
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }

    int getSize(){
        return top+1;
    }

    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};
int main(){
    Stack st (4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();
    int t = st.topElement();

    st.printStack();
    cout<<"Top element is "<<t<<endl;

    bool et = st.isEmpty();
    cout<<"Is stack empty "<<et<<endl;

return 0;
}