#include<bits/stdc++.h>
using namespace std;
void subSeq(int ind, vector<int> &list, int arr[],int n){
    
    if(ind>=n){
        for(auto it : list){
        cout<<it<<" ";
    }
    cout<<endl;
    return;
    }
    list.push_back(arr[ind]);
    subSeq(ind+1, list,arr,n);
    list.pop_back();
    subSeq(ind+1, list,arr,n);
}

int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> list;
    subSeq(0,list,arr,n);
    cout<<"SubSequences printed";
    return 0;

}