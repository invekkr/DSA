#include<bits/stdc++.h>
using namespace std;
int countSeqSum(int ind, int arr[],int n,int sum,int k){
    
    if(ind>=n){
       if(sum==k){
        return 1;     
    }
    return 0;
    }    
    
    sum+=arr[ind];
    int l = countSeqSum(ind+1,arr,n,sum,k);
    
    sum-=arr[ind];       
    int r = countSeqSum(ind+1,arr,n,sum,k);   

    return l+r;
}
int main(){
    int arr[] = {2,1,1};
    int n = 3,sum=0,k=2;
    int ans = countSeqSum(0,arr,n,sum,k);  
    cout<<"Total SubSeq "<<ans<<endl;
    return 0;

}