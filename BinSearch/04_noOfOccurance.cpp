// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int lowerBound(vector<int>& arr, int t){
        int l=0,h=arr.size()-1;
        int ans = h+1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(arr[mid]>=t){
                ans = mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    
    int upperBound(vector<int>& arr, int t){
        int l=0,h=arr.size()-1;
        int ans = h+1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(arr[mid]>t){
                ans = mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    
    int countFreq(vector<int>& arr, int target) {
        int l = lowerBound(arr,target);
        int h = upperBound(arr,target);
        
        return (h-l);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}