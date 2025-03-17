#include<bits/stdc++.h>
using namespace std;

void printNos(int n) {
    // Your code here
    if(n==0)    return ;
    cout<<n<<" ";
    printNos(n--);
}