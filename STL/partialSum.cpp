#include<bits/stdc++.h>
using namespace std;
int myOp(int x,int y){
    return x+y+10;
}
int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int>res(vec.size());
    partial_sum(vec.begin(),vec.end(),res.begin(),myOp);
    for(auto it = res.begin();it!=res.end();it++){
        cout<<*it<<" ";
    }
return 0;
}