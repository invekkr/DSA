#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=123;
    int lastDig,rev=0;
    
    while(n!=0){
        lastDig = n%10;
        rev = rev*10+lastDig;
        n=n/10;
    }
    cout<<rev;
return 0;
}