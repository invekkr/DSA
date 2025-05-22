#include<bits/stdc++.h>
using namespace std;
int countSeqSum(int ind, vector<int> &li, int arr[],int n,int sum,int k, int &c){
    
    if(ind>=n){
       if(sum==k){
        return 1;     
    }
    return 0;
    }    
    li.push_back(arr[ind]);
    sum+=arr[ind];
    int l = countSeqSum(ind+1, li,arr,n,sum,k,c);
    li.pop_back();
    sum-=arr[ind];       
    int r = countSeqSum(ind+1, li,arr,n,sum,k,c);   

    return l+r;
}
int main(){
    int arr[] = {2,1,1};
    int n = 3,sum=0,k=2,c=0;
    vector<int> li;
    int ans = countSeqSum(0,li,arr,n,sum,k,c);
    
    cout<<"Total SubSeq "<<ans<<endl;
    return 0;

}