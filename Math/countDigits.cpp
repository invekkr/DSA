#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=2000;
    int org = n;
    int count = 0;
    int lastDig;
    
    while(n!=0){
        lastDig = n%10;
        cout<<lastDig<<endl;
        if(lastDig!=0){
            if(org%lastDig==0)  count++;
        }
        n=n/10;
    }
    cout<<count<<endl;
return 0;
}