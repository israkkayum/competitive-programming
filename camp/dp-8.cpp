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

// if we write integer from A to B, how many zeros will we write?
// leading zeros not allowed
// A,B <= 10^9

int dp1[11][2][2];
int dp2[11][2];

// how many number smaller than n possible from this state(pos, isSmall)
ll func2(ll pos, ll isSmall){
    if(pos == 10) return 1;
    if(dp2[pos][isSmall] != -1) return dp2[pos][isSmall];

    ll lo = 0, hi = ara[pos], re = 0;
    is(isSmall) hi = 9;
    for (int i = lo; i <= hi; ++i){
        re += func2(pos+1, isSmall | (i < hi));
    }
    return dp2[pos][isSmall] = re;
}

ll func(ll pos, ll isSmall, ll hasStarted){
    if(pos == 10) return 0;
    if(dp1[pos][isSmall][hasStarted] != -1) return dp1[pos][isSmall][hasStarted];

    int lo = 0, hi = ara[pos], re = 0;
    if(isSmall) hi = 9;

    for (ll i = lo; i <= hi; ++i){
        ll val = func(pos+1, isSmall | (i < hi), hasStarted | (i != 0));

        // already started and right now we are putting 0 in current position
        // so we will have to find out in how many numbers this zero will contribute

        if(hasStarted && i == 0)
            val = val + func2((pos+1, isSmall | i < hi));
        
        re += val;
    }

    return dp1[pos][isSmall][hasStarted] = re;
}


// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));
    
    // ............


    return 0;
}