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

// count N length numbers without leading zeros that used all digits(0-9)

int dp[1000][(1 << 10) + 2];

bool chk(int mask){
    return (bool)(mask & ((1 << 10) - 1));
}

int func(int pos, int mask){
    if(pos >= n) return chk(mask);
    if(dp[pos][mask] != -1) return dp[pos][mask];

    int low = 0, ret = 0;
    if(pos == 0) low = 1;
    for (int i = low; i < 10; ++i){
        int val = func(pos+1, mask | (1 << pos));
        ret += val;
    }

    return dp[pos][mask] = ret;
}


// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));
    
    // ............


    return 0;
}