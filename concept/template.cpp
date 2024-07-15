#include <bits/stdc++.h>
using namespace std;

// Macros for frequently used commands
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << #x << " = " << (x) << endl;

// Typedefs for commonly used data types
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Main function
int main() {
    fastio;
    // Your code here

    int t; 
    cin >> t;

    while(t--){
        
        int sum = 0;
        for (int i = 0; i < 3; ++i){
            int x;
            cin >> x;
            sum += x;
        }

        if(sum%2 != 0){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }

    return 0;
}

