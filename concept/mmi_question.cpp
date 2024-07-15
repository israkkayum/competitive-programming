#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
int fact[N];

int binexp(int a, int b, int m){
	int result = 1;
	while(b>0){
		if(b & 1){
			result = (result * 1LL * a) % m;
		}
		a = (a * 1LL * a) % m;
		b >>= 1;
	}
	return result;
}

// alphabet --> k symbols, N size password, K > N
// KCN ---> N! * KCN

int main(){

    fact[0] = 1;
    for (int i = 1; i < N; ++i){
    	fact[i] = (fact[i-1] * 1LL * i) % M;
    }

	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;
        
        int ans = fact[n];
        ans = (ans * 1LL * fact[k]) % M;
        int den = (fact[k-n] * 1LL * fact[n]) % M;
        ans = (ans * 1LL * binexp(den, M-2, M)) % M;
        cout << ans << endl;
	}
}

// (O(t) * O(log(n))) + O(n)


// Q - linK
// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/




