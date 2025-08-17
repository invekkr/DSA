#include<bits/stdc++.h>
using namespace std;
void count(vector<int> &arr){
    int n = arr.size();
    int maxElem = *max_element(arr.begin(),arr.end());

    vector<int> countArray(maxElem+1, 0);

    // making a frequency count array
    for(int num : arr){
        countArray[num]++;
    }

    // converting count to prefix sum (cumulative count)
    for(int i=1;i<=countArray.size();i++){
        countArray[i]+=countArray[i-1];
    }
    
    vector<int> temp(n);

    // placing elements in sorted order (iterate backwards for stability)
    for(int i=n-1;i>=0;i--){
        int num = arr[i];
        temp[countArray[num]-1]=num;
        countArray[num]--;
    }
    arr = temp;



}
int main(){ 
    vector<int> arr = {8,6,3,1,4,5,7};
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    count(arr);
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}