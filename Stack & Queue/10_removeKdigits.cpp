// https://leetcode.com/problems/remove-k-digits/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        string st;
        int n=num.size();

        // case 1 : when top>next elem so we remove from stack & update "k", if st.top<next Elm
        for(char ch:num){
            while(!st.empty() && k>0 && st.back()>ch){
                st.pop_back();
                k--;
            }
            st.push_back(ch);
        }

        // case 2 : when k>0 but still elems aval
        while(k>0 && !st.empty()){
            st.pop_back();
            k--;
        }

        // case 3 : remove infront 0
        int a = 0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='0')
                a++;
            if(st[i]!='0')
                break;
        }

        if(a==st.size())
            return "0";


        return st.substr(a);
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}