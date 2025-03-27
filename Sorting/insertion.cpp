#include<bits/stdc++.h>
using namespace std;
void insertion(vector<int> &arr,int n){
    
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
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

    insertion(arr,n);
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}