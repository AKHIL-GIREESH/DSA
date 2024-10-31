#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int j = i + 1, k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                cout << i << " " << j << " " << k << "\n";
                j++;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
}