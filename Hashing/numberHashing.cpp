#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int hash[12] = {0}, arr[] = {1, 2, 1, 3, 2}, elem, elemCount;

    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]]++;
    }

    cin >> elemCount;

    while (elemCount--)
    {
        cout << "Input element : ";
        cin >> elem;
        cout << hash[elem];
    }
}