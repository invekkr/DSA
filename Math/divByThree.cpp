#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4};
    int cnt=0,rem;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%3!=0){
            
            rem = nums[i]%3;
            cout<<"rem "<<rem<<endl;
            if(rem==1){
                
                cnt++;
            }
            else if(rem==2){
                
                cnt++;
            }
        }
    }
    cout<<"ans"<<cnt;
return 0;
}