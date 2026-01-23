// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int search(string &pat, string &txt) {
        int n = txt.length();
        int m = pat.length();
        
        // created an array map for pattern 
        int patArr[26] = {0};
        
        for(char ch : pat){
            patArr[ch-'a']++;
        }
        
        int l=0,r=0,ans=0;
        
        // array for text matching 
        int matchArr[26] = {0};
        
        while(r<n){
            //put the incoming char in the matchArr
            matchArr[txt[r]-'a']++;
            
            //window size is small so increase the window size
            if(r-l+1<m)
                r++;
                
            //if window size == anagram size (check anagran)
            else if(r-l+1 == m){
            
                bool isSame = true;
            
                for(int i=0;i<26;i++){
                    if(patArr[i]!=matchArr[i]){
                        isSame = false; // if anagram not similar stop checking
                        break;
                    }
                    
                }
                
                // if similar incr the ans
                if(isSame)
                    ans++;
                
                // remove the first elem and shift l & r
                
                matchArr[txt[l]-'a']--;
                
                // slide window 
                l++;
                r++;
                
                
            }
            
        }
        return ans;
        
        
    }
};
int main(){
    return 0;
}