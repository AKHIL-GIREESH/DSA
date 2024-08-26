#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    vector<int> nums = {-2, -1};
    int sum = 0, maxSum = nums[0];

    if (maxSum > 0)
    {
        sum = maxSum;
    }

    for (int i = 1; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum > maxSum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxSum;

    return 0;
}