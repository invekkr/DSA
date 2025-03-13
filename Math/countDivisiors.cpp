#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int num = 1,ans=0;
    
    for(int a=1;a<=num;a++){
        int sum = 0;
    for(int i=1;i<=sqrt(a);i++){
       if(a%i==0){
        if(i*i==a)  sum = sum + i;
        else{
            sum = sum+i;
            sum = sum+a/i;
        }
       }
    }
    ans = ans+ sum;
}
        cout<<ans;
return 0;
}