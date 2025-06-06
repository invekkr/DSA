// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &nums)
{
    int n = nums.size(), c = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            c++;
        }
    }
    return (c <= 1);
}
int main()
{
    vector<int>arr = {3,4,5,1,2,8};
    bool ans = check(arr);
    cout<<ans;

    return 0;
}