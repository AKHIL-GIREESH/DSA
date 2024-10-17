#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    unordered_map<int, int> m;
    int k = 3, ps = 0, cnt = 0;

    m[ps] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        ps += nums[i];
        int diff = ps - k;
        cnt += m[diff];
        m[ps] += 1;
        // if (m.find(ps - k) == m.end())
        // {
        //     m[ps] = 1;
        // }
        // else
        // {
        //     m[ps - k] += 1;
        //     cnt++;
        // }
    }

    cout << cnt;
    return 0;
}