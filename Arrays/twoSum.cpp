#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 2, 3, 3, 4, 5, 6};
    int target = 9, inter;

    for (int i = 0; i < v1.size(); i++)
    {
        inter = target - v1[i];
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (v1[j] == inter)
            {
                cout << v1[i] << v1[j] << endl;
                break;
            }
        }
    }
}