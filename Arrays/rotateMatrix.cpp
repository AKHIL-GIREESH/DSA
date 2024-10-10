#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<vector<int>> a = {
                            {1, 0, 1, 1}, // 0 0 0 0
                            {1, 1, 1, 1}, // 0 0 0 1
                            {1, 1, 0, 1}, // 0 0 0 0
                            {0, 1, 1, 1}},
                        tempV; // 0 0 0 0
    int col0 = 1, n = 4, m = 4, temp;

    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - i - 1]);
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(a[i][j], a[j][i]);
        }
        // cout << "\n";
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}