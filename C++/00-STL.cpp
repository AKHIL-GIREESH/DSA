#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Array
    int a[] = {1, 3, 4};

    // Pair
    pair<int, int> p;
    p.second = 6;

    // Vector
    vector<int> v(5, 10);
    vector<int> v2(v);
    v.emplace_back(9);
    v[0] = 19;

    // iterator
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << "\n";
    }

    // Erase
    v.erase(v.begin());
    // v.erase(v.begin() + 2, v.begin() + 4); {10,20,12,23,35} --> {10,20,35}

    // Cout
    cout << "Hello World" << p.first << v[0] << v2[0];
    return 0;
}
