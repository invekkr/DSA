// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long getPower(int mid, int n, int m){
        long long res = 1;
        
        for(int i=0;i<n;i++){
            res *=mid;
            if(res>m)
                return res;
        }
        return res;
    }
    int nthRoot(int n, int m) {
        int l=0,h=m;
        int x = -1;
        while(l<=h){
            int mid = l+(h-l)/2;
            
            x = getPower(mid,n,m);
            
            if(x==m)
                return mid;
            
            else if(x<m)
                l = mid+1;
                
            else
                h = mid-1;
                
        }
        return -1;
        
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}