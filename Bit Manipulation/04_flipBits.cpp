// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = start ^ goal;
        int cnt = 0;
        while(n){
            n = n & (n-1);
            cnt++;
        }
        return cnt;
    }
};
void main(){
    
}