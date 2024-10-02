#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int xor1 = 0, xor2 = 0;
    vector<int> v1 = {3, 0, 1, 4, 5, 6, 7};

    for (int i = 0; i < v1.size(); i++)
    {
        xor1 = xor1 ^ v1[i];
        xor2 = xor2 ^ i;

        // cout << xor1 << "\t" << xor2 << "\n";
    }
    xor2 = xor2 ^ v1.size();
    cout << (xor1 ^ xor2);
    return 0;
}
