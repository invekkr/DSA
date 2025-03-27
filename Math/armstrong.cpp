#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 371;
    int org=n,ans=0,lastDig;
        while(n!=0){
            lastDig = n%10;
            ans = ans + (lastDig*lastDig*lastDig);
            n =n/10;
            
        }
        if(org==ans)    cout<<true;
        
        else cout<<ans<<" "<<false;
return 0;
}