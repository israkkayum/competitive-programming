#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N];

vector<pair<int, int>> graph2[N];

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int v1, v2, wt;
		cin >> v1 >> v2 >> wt;

        // Adjacency matrix
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt;

        // Adjecency list
        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});

        for (int v = 0; v < n; ++v) {
         cout << "\n Adjacency list of vertex " << v
             << "\n head ";
         for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
        }
	}
}

// Adjacency matrix
// O(N^2) - space complexity
// N != 10^5/ N <= 10^3

// Adjacency list
// O(N + M)
// N = 10^5 , E < 10^7









