#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4};
    int i=0,j=arr.size()-1;
        
        for(int k=0;k<arr.size();k++){
            if(i<=j){
            int a = arr[i];
            int b = arr[j];
            arr[i]=b;
            arr[j]=a;
            i++;
            j--;
            }
        }

        for(auto it =arr.begin() ; it<arr.end();it++){
            cout<<*it<<" ";
        }
return 0;
}