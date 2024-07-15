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

// finding longest palindromic substring |S| <= 1000

int dp[1005][1005];
string str;

int func(int b, int e){
    if(b >= e) return 1;
    if(dp[b][e] != -1) return dp[b][e];

    if(str[b] == str[e]){
        return dp[b][e] = func(b+1, e-1);
    }
    else{
        return dp[b][e] = 0;
    }
}

// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));
    
    cin >> str;

    int n = str.length();
    
    int ans = 0;
    for (int i = 0; i < n; ++i){
        for (int j = i; j < n; ++j){
            if(func(i, j)){
                ans = max(ans, j-i+1);
            }
        }
    }

    cout << ans << endl;

    return 0;
}