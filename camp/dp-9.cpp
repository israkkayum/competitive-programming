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

// maximize the result of an arithmetic expression consists of digits, '+' and '*', inserting brackets

int dp[105][105];
string str;

int func(int beg, int ed){
    if(beg > ed) return 0;
    if(beg == ed) return str[beg] - '0';
    if(dp[beg][ed] != -1) return dp[beg][ed];

    int re = 0;

    for (int i = beg+1; i < ed; ++i){
        if(str[i] >= '0' && str[i] <= '9') continue;
        int val1 = func(beg+1, i-1);
        int val2 = func(i+1, ed);
        int val;

        if(str[i] == '+') val = val1+val2;
        else val = val1*val2;
        re = max(re, val);
    }

    return dp[beg][ed] = re;
}


// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));
    
    // ............


    return 0;
}