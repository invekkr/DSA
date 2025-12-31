#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum+=arr[j];

                if(sum==k){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
        
    }
};

int main() {
    vector<int> arr = {10, 2, -2, -20, 10}; 
    int K = -10;                          

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
