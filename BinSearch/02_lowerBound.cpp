#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x) {
	int l = 0;
	int h = n-1;
	int ans = n;
	while(l<=h){
		int mid = l+(h-l)/2;

		if(arr[mid]>=x){
			ans = mid;
			h = mid-1;
		}
		else{
			l = mid+1;
		}
		
	}
	return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}