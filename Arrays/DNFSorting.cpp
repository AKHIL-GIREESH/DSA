#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    vector<int> v1 = {2, 0, 1};
    int low = 0, mid = 0, high = v1.size() - 1, iter = 0, temp;

    while (mid <= high)
    {
        if (v1[mid] == 0)
        {
            temp = v1[mid];
            v1[mid] = v1[low];
            v1[low] = temp;
            low++;
            mid++;
        }
        else if (v1[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = v1[mid];
            v1[mid] = v1[high];
            v1[high] = temp;
            high--;
        }
    }

    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout << *(i) << "\t";
    }

    cout << "\n";

    return 0;
}