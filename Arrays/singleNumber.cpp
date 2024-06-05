#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v1 = {1};
    int xor1 = 0;
    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        xor1 = xor1 ^ *(i);
    }

    cout << xor1;
}