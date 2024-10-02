#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = 0, minVal = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        profit = max(profit, prices[i] - minVal);
        minVal = min(minVal, prices[i]);
    }

    cout << profit;
}
