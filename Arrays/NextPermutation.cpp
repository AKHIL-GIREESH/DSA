#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};
    int b = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            b = i;
            break;
        }
    }

    cout << nums[b] << "\n";

    if (b != -1)
    {
        int sm = b + 1;
        for (int i = b + 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[sm] && nums[i] > nums[b])
            {
                sm = i;
            }
        }
        cout << nums[sm] << "\n";
        swap(nums[b], nums[sm]);
        cout << nums[b] << " " << nums[sm] << "\n";

        for (int i = b + 1; i < nums.size() - 1; i++)
        {
            for (int j = b + 1; j < nums.size() - i + b; j++)
            {
                // cout << nums[j] << nums[j + 1] << "\n";
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                    // cout << "swapped\n";
                }
            }
        }
    }
    else
    {
        reverse(nums.begin(), nums.end());
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
}