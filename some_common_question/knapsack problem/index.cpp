#include <bits/stdc++.h>
using namespace std;

// simple method i.e recursion
int knapsack(int *vl, int *wt, int n, int W) {
  if (n == 0 || W == 0) {
    return 0;
  }
  if (wt[n - 1] > W) {
    return knapsack(vl, wt, n - 1, W);
  } else {
    return max(vl[n - 1] + knapsack(vl, wt, n - 1, W - wt[n - 1]),
               knapsack(vl, wt, n - 1, W));
  }
}

// using dp
int knapsackdp(int *vl, int *wt, int n, int w, vector<vector<int>> &dp) {
  if (n == 0 || w == 0) {
    return 0;
  }
  if (dp[n-1][w-1] != -1) {
    return dp[n - 1][w - 1];
  }
  if (wt[n - 1] > w) {
    dp[n - 1][w - 1] = knapsackdp(vl, wt, n - 1, w, dp);
    return dp[n - 1][w - 1];
  } else {
    dp[n - 1][w - 1] = max(vl[n - 1] + knapsack(vl, wt, n - 1, w - wt[n - 1]),
                           knapsack(vl, wt, n - 1, w));
    return dp[n-1][w-1];
  }
}
int knapsackdp(int *vl, int *wt, int n, int w) {
  vector<vector<int>> dp;
  for (int i = 0; i < n; i++) {
    vector<int> v(w, -1);
    dp.push_back(v);
  }
  return knapsackdp(vl, wt, n, w, dp);
}
int main() {
  int n, W;
  cin >> n >> W;
  int *vl = new int[n];
  int *wt = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> vl[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> wt[i];
  }

  cout << knapsack(vl, wt, n, W) << endl;
  cout << knapsackdp(vl, wt, n, W) << endl;

  return 0;
}