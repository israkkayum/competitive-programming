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

// const int N = 1e9+10;
// vector<bool> isPrime(N, 1);
// vector<int> lp(N, 0), hp(N, 0);

// Given a 2*N Grid, how many ways we can cover the whole grid
// with tiles ?
// 2*1, 2*2, no rotation allowed

int dp[100005];

int func(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(dp[n] != -1) return dp[n];

    return dp[n] = func(n-1) + func(n-2);
}

// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n;

    cout << func(n) << endl;

    return 0;
}