#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> nums2 = {0};

    int pos = 0, neg = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            nums2[pos] = nums[i];
            pos += 2;
        }
        else
        {
            nums2[neg] = nums[i];
            neg += 2;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums2[i] << "\t";
    }
}