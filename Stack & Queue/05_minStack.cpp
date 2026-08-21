// https://leetcode.com/problems/min-stack/description/

#include <bits/stdc++.h>
using namespace std;
class MinStack {
public:
    stack <long long> st;
    long long mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        
        if(st.empty()){
            st.push(value);
            mini = value;
        }

        else if(value>=mini){
            st.push(value);
        }
        else{
            long long e = 2LL * value - mini;
            st.push(e);
            mini = value;
        } 
           
    }
    
    void pop() {
        if(st.top()<mini){
            mini = 2LL* mini - st.top();    // setting old mini
        }
        st.pop();
    }
    
    int top() {
        if(st.top()>=mini)  // top is already a bigger value
            return st.top();

        else
            return mini;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
class MinStack {
    stack<pair<int,int>> st;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push({value,value});
        }
        else{
            int mini = min(st.top().second,value);
            st.push({value,mini});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
