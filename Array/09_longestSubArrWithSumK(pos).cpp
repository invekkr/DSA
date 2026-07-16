#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        int l=0,r=0,sum=0;
        int maxLen = 0;
        int s=-1,e=-1;
        for(int r=0;r<n;r++){
            sum+=arr[r];

            while(l<=r && sum>k){
                sum-=arr[l];
                l++;
            }
            if(sum==k){
                if(r-l+1 > maxLen){
                    s = l;
                    e = r;
                    maxLen = r-l+1;
                }
            }
        

        }
        
        return {s,e};
        
    }
};

int main() {
    vector<int> arr = {2,5,1,6,8,3,4,7}; 
    int K = 15;                          

    Solution obj;
    vector<int> result = obj.subarraySum(arr, K);

    if (result.size() == 2 && result[0] != -1) {
        cout << "Subarray found from index "
             << result[0] << " to " << result[1] << endl;
    } else {
        cout << "No subarray found" << endl;
    }

    return 0;
}
