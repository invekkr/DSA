#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int k) {
        int l=0,h=arr.size()-1,mid,ans;

        while(l<=h){
            mid = l+(h-l)/2;
            if(arr[mid]>=k){
                ans = mid;
                

            }
            else if(arr[mid]<k){
                mid = l+1;
            }
            else{
                mid = h-1;
            }
        }

        return ans;
}
int main(){
    vector<int> arr={1,3,5,6};
    int k = 3;
    int ans = searchInsert(arr,k);
    cout<<ans;
return 0;
}