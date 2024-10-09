#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    int l = nums[nums.size() - 1];
    vector<int> ans = {l};
    // int l =
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] > l)
        {
            ans.push_back(nums[i]);
            l = nums[i];
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\t";
    }
}