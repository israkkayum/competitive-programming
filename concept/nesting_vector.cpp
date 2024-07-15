
#include <bits/stdc++.h>
using namespace std;

// ------------ Vector of pair ---------

// void printVec(vector<pair<int, int>> v)
// {
//    cout << v.size() << endl;

//    for (int i = 0; i < v.size(); ++i)
//    {
//    	cout << v[i].first<< " " << v[i].second << endl;
//    }

//    cout << endl;
// }


// ------------ vector of array --------

// void printVec(vector<int> v)
// {
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout << v[i] << " ";
// 	}
// 	cout << endl;
// }

// ------------- vector of vector -------------

void printVec(vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}



int main()
{
	// -------- Vector of pair ----------

	// vector<pair<int, int>> v;

	// int n;
	// cin >> n;

	// for (int i = 0; i < n; ++i)
	// {
	// 	int x, y;
	// 	cin >> x >> y;

	// 	v.push_back({x, y});
	// } 

	// printVec(v); 


    // ------------ Vector of array ----------

    // int N;
    // cin >> N;

    // vector<int>v[N];

    // for (int i = 0; i < N; ++i)
    // {
    // 	int n;
    // 	cin >> n;

    // 	for (int j = 0; j < n; ++j)
    // 	{
    // 		int x;
    // 		cin >> x;

    // 		v[i].push_back(x);
    // 	}
    // }

    // for (int i = 0; i < N; ++i)
    // {
    // 	printVec(v[i]);
    // }

    // -------------- vector of vector ---------------

    vector<vector<int>> v;

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
    	vector<int> temp;

    	int n;
    	cin >> n;

    	for (int j = 0; j < n; ++j)
    	{
    		int x;
    		cin >> x;

    		temp.push_back(x);
    	}

    	v.push_back(temp);
    }

    for (int i = 0; i < v.size(); ++i)
    {
    	printVec(v[i]);
    }

}












