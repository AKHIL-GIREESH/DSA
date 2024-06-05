#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 3, 2}, elem, elemCount;
    unordered_map<int, int> mpp;

    for (int i = 0; i < 5; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto i : mpp)
    {
        cout << i.first << "-->" << i.second << endl;
    }

    cout << "Input the number of elems";
    cin >> elemCount;

    for (int i = 0; i < elemCount; i++)
    {
        cout << "Input the val : ";
        cin >> elem;
        cout << mpp[elem] << endl;
    }
}