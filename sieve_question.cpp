#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

int multiple_ct[N];
int hsh[N];

int main(){
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i){
		int x;
		cin >> x;
		hsh[x]++;
	}

	for (int i = 1; i < N; ++i){
		for (int j = i; j < N; j += i){
			multiple_ct[i] += hsh[j];
		}
	}

	int t;
	cin >> t;
	while(t--){
		int p, q;
		cin >> p >> q;

        long long lcm = p*1LL*q / __gcd(p, q);
        long ans = multiple_ct[p] + multiple_ct[q];
        if(lcm < N) ans -= multiple_ct[lcm];
        cout << ans << "\n";
	}
}

// Q
// https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/