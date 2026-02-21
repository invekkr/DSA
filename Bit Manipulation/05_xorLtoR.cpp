//https://www.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int xorRem(int x){
        // because xor repeats in the iteration of 4
        if(x%4==0) return x;
        if(x%4==1) return 1;
        if(x%4==2) return x+1;
        if(x%4==3) return 0;
        
    }
    int findXOR(int l, int r) {
        return (xorRem(l-1) ^ xorRem(r));
        
    }
};
void main(){

}