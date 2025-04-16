#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={4,2,4,0,0,3,0,5,1,0};
    int n = arr.size();
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
    int i=0,j= 1;
    for(int a=0;a<n-1;a++){
        if(arr[i]!=0 && arr[j]!=0){
            
            i++;
            j++;
        }

        else if(arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }

        else if(arr[i]!=0 && arr[j]==0){
            
            i++;
            j++;
        }
        else if(arr[i]==0 && arr[j]==0){
            
            j++;
        }
    }
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;



return 0;
}