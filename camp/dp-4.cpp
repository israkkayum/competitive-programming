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

// finding longest palindromic subsequence |S| <= 1000

int dp[1005][1005];
string str;
pair<int, int> nxt[1005][1005];

int func(int b, int e){
    if(b == e) return 1;
    if(b > e) return 0;
    if(dp[b][e] != -1) return dp[b][e];

    if(str[b] == str[e]){
        // as str[b] and str[e] equal, we should take these 2 char and find the maximum.
        // plain subsequence form the remaining suustr as func(b+1, e-1) and add 2 with it.
        nxt[b][e] = {b+1, e-1};
        return dp[b][e] = func(b+1, e-1) + 2;
    }
    else{
        // as str[b] and str[e] doesn't match, so now we have 2 options
        //1. we can remove the str[b] and find maximum answer from the remaining string
        //2. we can remove the str[e] and find maximum answer from the remaining string

        int val1 = func(b+1, e);
        int val2 = func(b, e-1);

        if (val1 > val2){
            nxt[b][e] = {b+1, e};
        }
        else{
            nxt[b][e] = {b, e-1};
        }

        return dp[b][e] = max(val1, val2);
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