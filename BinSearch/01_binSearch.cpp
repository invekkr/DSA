#include <bits/stdc++.h>
using namespace std;
void binSearchRec(vector<int> &arr, int k, int l, int h){
    if(l>h){
        cout<<"Element not found ";
        return;
    }
    int mid = (l+h)/2;

    if(arr[mid]==k){
        cout<<"Element found at "<<mid;
        return; 
    }

    else if(arr[mid]<k){
        binSearchRec(arr,k,mid+1,h);
    }
    else{
        binSearchRec(arr,k,l,mid-1);
    }

    
}

void binSearchItr(vector<int> &arr, int k)
{
    int l = 0, h = arr.size();
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == k)
        {
            cout << "Element found at " << mid;
            return;
        }

        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
}
int main()
{
    vector<int> arr = {12, 23, 34, 45, 56, 67};
    binSearchItr(arr, 12);
    cout<<endl;
    binSearchRec(arr, 56, 0, arr.size());
}