#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick(vector<int> &arr,int low, int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        quick(arr,low,pIndex-1);
        quick(arr,pIndex+1,high);
    }
}
int main(){
    vector<int> arr = {8,6,3,1,4,5,7};
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quick(arr,0,n-1);
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}