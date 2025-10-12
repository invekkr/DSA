#include<bits/stdc++.h>
using namespace std;
bool subSeqSum(int ind, vector<int> &l, int arr[],int n,int sum,int k){
    
    if(ind>=n){
       if(sum==k){
        for(auto it : l){
            cout<<it<<" ";
        }cout<<" = "<<sum<<endl;
        return true;
    }
    return false;
    }    
    l.push_back(arr[ind]);
    sum+=arr[ind];
    if((subSeqSum(ind+1, l,arr,n,sum,k)) == true)   return true;
    l.pop_back();
    sum-=arr[ind];       
    if((subSeqSum(ind+1, l,arr,n,sum,k))==true) return true;

    return false;
}
int main(){
    int arr[] = {2,5,3,2,2,3,5,1};
    int n = 8,sum=0,k=12;
    vector<int> l;
    bool ans = subSeqSum(0,l,arr,n,sum,k);
    if(ans){
         cout<<"SubSequences Sum printed";
    }
    else{
         cout<<"SubSequences Sum not printed";
    }
   
    return 0;

}