/**
 *    author:  israk_kayum
**/
#include <bits/stdc++.h>
using namespace std;
 
// Macros for frequently used commands
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << #x << " = " << (x) << endl;
#define endl '\n'
 
// Typedefs for commonly used data types
typedef long long ll;
 
// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
 
// const int N = 1e5+10;
// vector<bool> isPrime(N, 1);
// vector<int> lp(N, 0), hp(N, 0);
 
 
// main function
int main()
{
  fastio;

  int t;
  cin >> t;
 
  while(t--){
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for (int i = 0; i < k; ++i)
    {
        cin >> a[i];
    }

    priority_queue<int, vector<int>, greater<int>> p(a.begin(), a.end());

    int op = 0;

    while(p.size() > 1){
        int sm = p.top();
        p.pop();
        int seSm = p.top();
        p.pop();

        p.push(sm + seSm);
        op++;
    }

    cout << op << endl;
 
  }
    
 
  return 0;
}