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

// Max srbsequence sum not taking two consecutive elements

int dp[100005][2];

int func(int pos, int prv){
    if(pos > n) return 0;
    if(dp[pos][prv] != -1) return dp[pos][prv];

    if(prv == 0){
        // taking ara[pos]
        int val1 = func(pos+1, 1) + ara[pos];
        // ignoring ara[pos]
        int val2 = func(pos+1, 0);

        return dp[pos][prv] = max(val1, val2);
    }
    else{
        // prv = 1 we can't take ara[pos], so only one option
        int val2 = func(pos+1, 0);
        return dp[pos][prv] = val2;
    }
}

// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));


    return 0;
}