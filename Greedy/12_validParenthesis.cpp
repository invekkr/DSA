// https://leetcode.com/problems/valid-parenthesis-string/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int l=0,h=0;

        for(char ch:s){
            if(ch=='('){
                l++;
                h++;
            }
            else if(ch==')'){
                l--;
                h--;
            }
            else if(ch=='*'){
                l--;
                h++;
            }
            l = max(l,0);
            if(h<0)
            return false;
        }
        
        
        return l==0;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}