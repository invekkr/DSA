#include<bits/stdc++.h>
using namespace std;
void selection(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index = j;
            }
            
        }swap(arr[i],arr[min_index]);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int>arr = {64,25,12,22,11};
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selection(arr,n);
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}