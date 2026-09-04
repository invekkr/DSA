#include <bits/stdc++.h>
using namespace std;
int fib(int n, vector<int> &dp){
    // base case
    if(n<=1)
        return n;

    // checking if that fucntion call has already been calculated
    if(dp[n]!=-1)
        return dp[n];
    
    // solve the smaller problem & storing answers in the dp array when calculated
    dp[n] = fib(n-1,dp) + fib(n-2,dp);

    return dp[n];
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<endl;
    vector<int> arr(n+1,-1);
    cout<<fib(n,arr)<<endl;
    return 0;
}