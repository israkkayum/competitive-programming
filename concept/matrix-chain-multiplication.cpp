#include<bits/stdc++.h>
using namespace std;

// const int MAX = 1e5+10;

void printOptimalParenthesis(vector<vector<int>>& s, int i, int j)
{
	if(i == j){
		cout << "A" << i;
	}
	else{
		cout << "(";
		printOptimalParenthesis(s, i, s[i][j]);
		printOptimalParenthesis(s, s[i][j]+1, j);
		cout << ")";
	}
}

int matrixChainMultiplication(vector<int>& dimensions)
{
	int n = dimensions.size() - 1;
	vector<vector<int>> m(n+1, vector<int> (n+1, 0));
	vector<vector<int>> s(n+1, vector<int> (n+1, 0));

	for (int len = 2; len <= n ; ++len)
	{
		for (int i = 1; i <= n - len + 1; ++i)
		{
			int j = i + len - 1;
			m[i][j] = INT_MAX;

			for (int k = i; k <= j-1; ++k)
			{
				int cost = m[i][k] + m[k+1][j] + dimensions[i-1]
				           * dimensions[k] * dimensions[j];

				if (cost < m[i][j])
				{
					m[i][j] = cost;
					s[i][j] = k;
				}
			}
		}
	}

	cout << "Optimal Parenthesization: ";
	printOptimalParenthesis(s, 1, n);
	cout << endl;

	return m[1][n];
}

int main()
{
	int n;
	cin >> n;

	vector<int> dimensions;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		dimensions.push_back(x);
	}

	int minimumMultiplications = matrixChainMultiplication(dimensions);
    cout << "Minimum number of multiplications: " << minimumMultiplications << endl;
}

