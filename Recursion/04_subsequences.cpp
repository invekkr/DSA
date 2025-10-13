#include <bits/stdc++.h>
using namespace std;

void subSeq(int start, vector<int> &list, int arr[], int n) {
    // print current subset
    for (auto it : list) {
        cout << it << " ";
    }
    cout << endl;

    // loop through all possible choices from 'start'
    for (int i = start; i < n; i++) {
        list.push_back(arr[i]);            // choose arr[i]
        subSeq(i + 1, list, arr, n);       // recurse for next index
        list.pop_back();                   // backtrack (undo choice)
    }
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> list;
    subSeq(0, list, arr, n);
    cout << "SubSequences printed";
    return 0;
}
