#include<bits/stdc++.h>
using namespace std;

void printNoTail(int n) {
    // Your code here
    if(n==0)    return ;
    cout<<n<<" ";
    printNoTail(n-1);
}

void printNoHead(int n) {
    // Your code here
    if(n==0)    return ;
    printNoHead(n-1);
    cout<<n<<" ";
    
}

int main(){
    printNoTail(5);
    cout<<endl;
    printNoHead(5);
    return 0;
}