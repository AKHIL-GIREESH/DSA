#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void perm(vector<vector<int>> allPrem, vector<int> ques, int in)
{

    if (in == 2)
    {
        allPrem.push_back(ques);

        for (int i = 0; i < allPrem[allPrem.size() - 1].size(); i++)
        {
            cout << allPrem[allPrem.size() - 1][i] << "\t";
        }
        cout << "\n";
        return;
    }

    for (int i = in; i < ques.size(); i++)
    {
        swap(ques[in], ques[i]);
        perm(allPrem, ques, in + 1);
        swap(ques[in], ques[i]);
    }
}

int main()
{
    vector<int> ques = {1, 2, 3};
    vector<vector<int>> allPerm;

    perm(allPerm, ques, 0);
}