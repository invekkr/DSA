#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
        int *arr;
        int front;
        int back;
        int size;
        int count;

    Queue(int n){
        size = n;
        arr = new int[size];
        front = 0;
        back = -1;
        count = 0;
    }

    void enqueue(int x){
        if(count==size){
            cout<<"Queue full"<<endl;
            return;
        }
        back = (back + 1)%size;
        arr[back]=x;
        count++;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
        }
        front = (front+1)%size;
        count--;
    }

    int getFront(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        return count==0;
    }

    int getSize(){
        return count;
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue (front to rear): ";
        for (int i = 0; i < count; ++i) {
            int index = (front + i) % size;
            cout << arr[index] << " ";
        }
        cout << endl;
    }
    
};
int main(){

    Queue qu(4);

    qu.enqueue(11);
    qu.enqueue(22);
    qu.enqueue(33);
    qu.enqueue(44);

    qu.dequeue();
    qu.enqueue(55);
    qu.printQueue();

    cout<<qu.getSize()<<endl;
    cout<<qu.getFront()<<endl;

return  0;
}