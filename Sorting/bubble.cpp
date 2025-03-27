#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int> &arr,int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }

}
int main(){
    vector<int>arr = {64,25,12,22,11};
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubble(arr,n);
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}