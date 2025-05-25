#include<bits/stdc++.h>
using namespace std;
int fct(int x){
    if(x==1)    return 1;
    return fct(x-1)*x;
}
int main(){ 
    int ans = fct(5);
    cout<<ans;

return 0;
}