#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    vector<int> v = {2, 0, 0, 0, 3};
    map<int, int> m;
    int preSum = 0, l = 0, k = 3, rem;
    for (int i = 0; i < v.size(); i++)
    {
        preSum += v[i];

        if (preSum == k)
        {
            l = max(l, i + 1);
            // cout << v[i] << endl;
        }

        rem = preSum - k;

        if (m.find(rem) != m.end())
        {
            int len = i - m[rem];
            l = max(l, len);
            // cout << v[i] << endl;
        }

        if (m.find(preSum) == m.end())
        {
            // cout << i << endl;
            m[preSum] = i;
        }
    }
    cout << l;
    return 0;
}