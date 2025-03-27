#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2,3,2,3,5};
    map <int,int> mp;
    vector<int> ans(arr.size(), 0);

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(int i=0;i<arr.size()+1;i++){
        ans[i-1]=mp[i];
    }

    for(int i=0;i<arr.size();i++){
        cout<<ans[i];
    }
return 0;
}