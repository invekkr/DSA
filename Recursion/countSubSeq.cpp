#include<bits/stdc++.h>
using namespace std;
void subSeqSum(int ind, vector<int> &l, int arr[],int n,int sum,int k, int &c){
    
    if(ind>=n){
       if(sum==k){
        c++;
        for(auto it : l){
            cout<<it<<" ";
        }cout<<" = "<<sum<<endl;
        
    }
    return ;
    }    
    l.push_back(arr[ind]);
    sum+=arr[ind];
    subSeqSum(ind+1, l,arr,n,sum,k,c);
    l.pop_back();
    sum-=arr[ind];       
    subSeqSum(ind+1, l,arr,n,sum,k,c);

    
}
int main(){
    int arr[] = {2,1,1};
    int n = 3,sum=0,k=2,c=0;
    vector<int> l;
    subSeqSum(0,l,arr,n,sum,k,c);
    
    cout<<"SubSequences Sum printed"<<endl;
    cout<<c;
    return 0;

}