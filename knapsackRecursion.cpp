#include <bits/stdc++.h>
using namespace std;
int Knapsack(vector<int> wt, vector<int> val, int W, int n)
{
    // basec condition (Smallest Valid Input)
    if (n == 0 || W == 0)
        return 0;

    // Choice diagram
    if (wt[n - 1] <= W)
    {
        return max(val[n - 1] + Knapsack(wt, val, W - wt[n - 1], n - 1), Knapsack(wt, val, W, n - 1));
    }
    else
    {
        return Knapsack(wt, val, W, n - 1);
    }
}
int main()
{
    int n = 4, W = 7;
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    cout << Knapsack(wt, val, W, n); // 4 + 5 = 9
    return 0;
}
