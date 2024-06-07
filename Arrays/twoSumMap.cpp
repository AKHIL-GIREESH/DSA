#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    vector<int> v1 = {7, 1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    unordered_map<int, int> m;
    int sum = 5;
    for (int i = 0; i < v1.size(); i++)
    {
        if (m.find(sum - v1[i]) != m.end())
        {
            cout << v1[i] << m[sum - v1[i]];
            break;
        }
        m[v1[i]] = i;
    }
}