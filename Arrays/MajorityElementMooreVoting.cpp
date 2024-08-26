#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int len = nums.size(), count = 1, elem = nums[0];

    for (int i = 1; i < len; i++)
    {
        if (count == 0)
        {
            count = 1;
            elem = nums[i];
        }
        else if (nums[i] == elem)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout << elem << "\n";

    return 0;
}