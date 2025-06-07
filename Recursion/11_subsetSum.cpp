// https://www.geeksforgeeks.org/problems/subset-sums2234/1&selectedLang=python3
#include<bits/stdc++.h>
using namespace std;
void sums(int ind, vector<int>&ans, vector<int>&arr,int sum){
        if(ind==arr.size()){
            ans.push_back(sum);
            return;
        }
        
        sums(ind+1,ans,arr,sum+arr[ind]);
        sums(ind+1,ans,arr,sum);
        
    }
    vector<int> subsetSums(vector<int>& arr) {
        vector<int>ans;
        sums(0,ans,arr,0);
        return ans;
        
    }
int main(){
    vector<int> arr = {2,3};
    
    arr = subsetSums(arr);
    for(auto it =arr.begin() ; it<arr.end();it++){
            cout<<*it<<" ";
        }
    return 0;
return 0;
}