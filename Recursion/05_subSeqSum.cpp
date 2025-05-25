#include<bits/stdc++.h>
using namespace std;
void subSeqSum(int ind, vector<int> &l, int arr[],int n,int sum,int k){
    
    if(ind>=n){
       if(sum==k){
        for(auto it : l){
            cout<<it<<" ";
        }cout<<" = "<<sum<<endl;
    }
    return;
    }    
    l.push_back(arr[ind]);
    sum+=arr[ind];
    subSeqSum(ind+1, l,arr,n,sum,k);
    l.pop_back();
    sum-=arr[ind];       
    subSeqSum(ind+1, l,arr,n,sum,k);
}
int main(){
    int arr[] = {2,5,3,2,2,3,5,1};
    int n = 8,sum=0,k=8;
    vector<int> l;
    subSeqSum(0,l,arr,n,sum,k);
    cout<<"SubSequences Sum printed";
    return 0;

}