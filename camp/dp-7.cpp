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

// count the number of integers within the range A to B whose digitSum equal to X
// A,B <= 10^9, X <= 10^5

int dp[11][2][92];

int func(int pos, int isSmall, int digitSum){
    if(pos == 10) return digitSum = x;
    if(dp[pos][isSmall][digitSum] != -1) return dp[pos][isSmall][digitSum];

    int lo = 0, hi = str[pos] - '0', re = 0;
    if(isSmall) hi = 9;

    for (int i = lo; i <= hi; ++i){
        // if already isSmall = 1, then it will always be 1 for future states
        // otherwise, if we are using any value less then high, then it will be 1.

        int newIsSmall = isSmall | (i < hi);
        int val = func(pos+1, newIsSmall, digitSum+i);
        re = re + val;
    }

    return dp[pos][isSmall][digitSum] = re;
}


// Main function
int main()
{
    fastio;

    memset(dp, -1, sizeof(dp));
    
    // ............


    return 0;
}