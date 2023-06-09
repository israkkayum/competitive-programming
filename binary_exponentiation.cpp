#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

// recursive (modulus)

int binExpReecur(int a, int b){
	if(b == 0) return 1;

	int res = binExpReecur(a, b/2);

	if (b&1){  // if odd
		return (a * ((res * 1LL * res) % M)) % M;
	}
	else{
		return (res * 1LL * res) % M;
	}
}


// recursive (normal)

int binExpReecur(int a, int b){
	if(b == 0) return 1;

	int res = binExpReecur(a, b/2);

	if (b&1){  // if odd
		return a * res * res;
	}
	else{
		return res * res;
	}
}

// iterative (normal) ---> recomended

int binExpIter(int a, int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = ans * a;
		}
		a = a * a;
		b >>= 1;
	}
	return ans;
}

// iterative (modulus) ---> recomended

int binExpIter(int a, int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans * 1LL * a) % M;
		}
		a = (a * 1LL * a) % M;
		b >>= 1;
	}
	return ans;
}

// for large modulud and large a

int binExp(long long a, long long b){
	int ans = 1;
	while(b>0){
		if(b&1){
			ans = binMultiply(ans, a);
		}
		a = binMultiply(a, a);
		b >>= 1;
	}
	return ans;
}

int binMultiply(long long a, long long b){
	int ans = 1;
	while(b>0){
		if(b&1){
			ans = (ans + a) % M;
		}
		a = (a + a) % M;
		b >>= 1;
	}
	return ans;
}

// log^2(n)

// superPower - ETF & Euler's Theorem

int binExpEuler(int a, long long b, int m){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans * 1LL * a) % m;
		}
		a = (a * 1LL * a) % m;
		b >>= 1;
	}
	return ans;
}

int main(){
	int a = 2, b = 3;

	cout << binExpReecur(a, b) << endl;
	cout << binExpIter(a, b) << endl;

    // 50 ^ 64 ^ 32 
	cout << binExpEuler(50, binExpEuler(64, 32, M-1), M);
}

