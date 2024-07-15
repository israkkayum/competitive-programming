#include<bits/stdc++.h>
using namespace std;

// n^r mod M

ll bigMod(ll n, ll r, ll Mod){
	if(r == 0) return 1LL;

	ll ret = bigMod(n, r/2, Mod);
	ret = Mul(ret, ret, Mod);

	if(r%2 == 1) ret = Mul(ret, n, Mod);

	return ret;
}