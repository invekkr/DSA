#include <bits/stdc++.h>
using namespace std;
int fib(int n){
   
    vector<int> dp(n+1,-1);

    // base cases
    dp[0] = 0;
    dp[1] = 1;

    // transition + iteration + filling dp table

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    // return target state
    return dp[n];
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<fib(n)<<endl;
    return 0;
}