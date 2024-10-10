#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> v = {102, 11, 101, 10, 9, 6, 7, 8, 100};
    unordered_set<int> us;
    int maxLen = 0, len;

    for (int i = 0; i < v.size(); i++)
    {
        us.insert(v[i]);
    }

    for (auto i : us)
    {
        if (us.find(i - 1) == us.end())
        {
            len = 1;
            int c = i;
            while (us.find(c + 1) != us.end())
            {
                len++;
                c++;
            }

            if (len > maxLen)
            {
                maxLen = len;
            }
        }
    }

    cout << maxLen;
}