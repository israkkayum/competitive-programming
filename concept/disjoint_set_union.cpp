#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int parent[N];
int sz[N];

void make(int v){
	parent[v] = v;
}

int find(int v){
	if(parent[v] == v) 
		return parent[v];
	// path compression
	return parent[v] = find(parent[v]);
}

void Union(int a, int b){
	a = find(a);
	b = find(b);

	if(a != b){
		// union by size
		if(sz[a] < sz[b])
			swap(a, b);

		parent[b] = a;
		sz[a] += sz[b];
	}
}

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i){
		make(i);
	}

	while(k--){
		int u, v;
		cin >> u >> v;
		Union(u, v);
	}

	int connected_ct = 0;
	for (int i = 1; i <= n; ++i){
		if(find(i) == i) connected_ct++;
	}
    
    cout << connected_ct << endl;
}

