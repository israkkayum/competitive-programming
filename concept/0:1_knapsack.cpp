#include<bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int>& wt, vector<int>& val, int n){
	vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

	for (int i = 1; i <= n ; ++i){
		for (int w = 1; w <= W; ++w){
			if(wt[i-1] <= w){
				dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]], dp[i-1][w]);
			}
			else{
				dp[i][w] = dp[i-1][w];
			}
		}
	}
	return dp[n][W];
}

int main()
{
	int W = 8; // knapsack capacity
	vector<int> wt = {2, 3, 4, 5}; // item weights
	vector<int> val = {1, 10, 5, 6}; // item values
	int n = wt.size(); // number of items

	int maxValue = knapsack(W, wt, val, n);
    cout << "Maximum value: " << maxValue << endl;
}