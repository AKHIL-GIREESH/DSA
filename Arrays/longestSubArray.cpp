#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    vector<int> v1 = {7, 1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    vector<int> v = {2, 0, 0, 0, 3};
    unordered_map<int, int> m;
    int preSum = 0, l = 0, k = 3, lp = 0, rp = 0;
    preSum = v[0];
    while (rp != v.size())
    {

        while (lp <= rp && preSum > k)
        {
            preSum -= v[lp];
            lp++;
        }

        if (preSum == k)
        {
            int len = rp - lp + 1;
            l = max(l, len);
        }
        rp++;
        if (rp < v.size())
        {
            preSum += v[rp];
        }
    }
    cout << l;
}