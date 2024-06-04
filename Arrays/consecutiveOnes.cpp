#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v1 = {1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0};
    int iter = 0, maxi = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i])
        {
            iter++;
            maxi = maxi < iter ? iter : maxi;
        }
        else
        {
            iter = 0;
        }
    }

    cout << maxi;
    return 0;
}