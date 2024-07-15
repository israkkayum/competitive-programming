#include<bits/stdc++.h>
using namespace std;
const int N = 1e2+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex){
	/** Take action on vertex after entring
	 * the vertex
	 * */
	 cout << vertex << endl;
	 vis[vertex] = true;
     for(int child : g[vertex]){
     	cout << "par " << vertex << ", child " << child << endl;
     	if(vis[child]) continue;
     	/** Take action on child before
     	 * entring the child node
     	 * */
     	dfs(child);
     	/** Take action on child after exiting
     	 * child node
     	 **/
     }
     /** Take action on vertex before exiting
      * the vertex
      * */ 
}

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
        
        g[v1].push_back(v2);
        g[v2].push_back(v1);
	}

	for (int i = 1; i <= n; ++i)
	{
		dfs(i);
	}
}

