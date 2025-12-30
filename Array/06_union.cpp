// union of 2 arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int a[], int b[], int n, int m)
{
    vector<int> result;

    int i = 0, j = 0;

    while (i < n && j < m)
    {

        if (result.empty() || result.back() != min(a[i], b[j]))
        {
            // element in arr1 > arr2
            if (a[i] > b[j])
            {
                result.push_back(b[j]);
                j++;
            }
            // element in arr1 < arr2
            else if (a[i] < b[j])
            {
                result.push_back(a[i]);
                i++;
            }
            // both element are equal
            else
            {
                result.push_back(a[i]);
                i++;
                j++;
            }
        }
        else
        {
            if (a[i] < b[j])
                i++;
            else if (a[i] > b[j])
                j++;
            else
            {
                i++;
                j++;
            }
        }

       
    }

     // if arr1 remains
        while (i < n)
        {
            if (result.empty() || result.back() != a[i])
            {
                result.push_back(a[i]);
               
            } i++;
        }

        // if arr2 remains
        while (j < m)
        {
            if (result.empty() || result.back() != b[j]){
                result.push_back(b[j]);
                
            }j++;
               
        }

    return result;
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 7, 8};
    int b[] = {1, 2, 3, 6, 8};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    vector<int> ans = findUnion(a, b, n, m);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
