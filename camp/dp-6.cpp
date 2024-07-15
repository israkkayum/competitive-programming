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

// how many permotation of S (|S| <= 10, unique digit number) are disible by D (<= 1000)

int dp[(1 << 10) + 2][1000];

int func(int mask, int mod){
    int pos = __buildin_popcount(mask);
    if(pos == s.size()) return (mod == 0);
    if(dp[mask][mod] != -1) return dp[mask][mod];

    int re = 0;
    for (int i = 0; i < s.size(); ++i){
        if(((1<<i) & mask)) continue;
        int val = func(mask | (1 << i), (mod * 10 + s[pos] - '0') % x);
        re = re + val;
    }

    return dp[mask][mod] = re;
}


// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));
    
    // ............


    return 0;
}