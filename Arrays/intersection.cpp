#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    vector<int> v1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> v2 = {2, 3, 3, 5, 6, 6, 7};
    vector<int> v3;

    int iter1 = 0, iter2 = 0;

    while (iter1 < v1.size() && iter2 < v2.size())
    {
        if (v1[iter1] == v2[iter2])
        {
            v3.emplace_back(v1[iter1]);
            iter1++;
            iter2++;
        }
        else if (v1[iter1] < v2[iter2])
        {
            iter1++;
        }
        else
        {
            iter2++;
        }
    }

    for (auto i = v3.begin(); i != v3.end(); i++)
    {
        cout << *(i) << "\t";
    }

    cout << "\n";

    return 0;
}