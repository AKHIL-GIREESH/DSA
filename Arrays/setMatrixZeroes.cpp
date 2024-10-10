#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<vector<int>> a = {
        {1, 0, 1, 1},  // 0 0 0 0
        {1, 1, 1, 1},  // 0 0 0 1
        {1, 1, 0, 1},  // 0 0 0 0
        {0, 1, 1, 1}}; // 0 0 0 0
    int col0 = 1, n = 4, m = 4;

    cout << a.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][0] = 0;
                if (j != 0)
                {
                    a[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] != 0)
            {
                if (a[i][0] == 0 || a[0][j] == 0)
                {
                    a[i][j] = 0;
                }
            }
        }
    }

    // cout << a[0][0] << "\n";

    if (a[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            a[0][j] = 0;
        }
    }

    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            a[i][0] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }

        cout << "\n";
    }
}