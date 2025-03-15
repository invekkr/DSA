#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
   
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans += i*(n/i);
    }
    return ans;
        cout<<"ans"<<ans;
return 0;
}