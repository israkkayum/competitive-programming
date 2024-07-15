#include<bits/stdc++.h>
using namespace std;

const int N = 100;
const int INF = 1e5+10;

vector<pair<int, int>> g[N];

vector<int> vis(N, 0);
vector<int> dist(N, INF);

void dijkstra(int source){

	set<pair<int, int>> st;

	st.insert({0, source});
	dist[source] = 0;

	while(st.size() > 0){
		auto node = *st.begin(); // minimium element
		int v = node.second;
		// int v_dist = node.first;
		st.erase(st.begin());
		if(vis[v]) continue;
		vis[v] = 1;
		for(auto child : g[v]){
			int child_v = child.first;
			int wt = child.second;
			if (dist[v] + wt < dist[child_v]){
				dist[child_v] = dist[v] + wt;
				st.insert({dist[child_v], child_v});
			}
		}
	}
}

int main()
{
	set<int> nodes;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int x, y, wt;
		cin >> x >> y >> wt;
		g[x].push_back({y, wt});

		nodes.insert(x);
		nodes.insert(y);
	}

	int source;
	cin >> source;
	dijkstra(source);

	for (auto node : nodes)
	{
		cout<< node << " " << dist[node] << endl;
	}
}