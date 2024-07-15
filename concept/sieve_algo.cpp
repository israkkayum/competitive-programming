#include<bits/stdc++.h>
using namespace std;

int N = 1e7+10;
vector<bool> isPrime(N, 1);

int main(){
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i < N; ++i){
		if (isPrime[i]){
			for (int j = 2*i; j < N; j += i){
				isPrime[j] = false;
			}
		}
	}

	// N(log log(N))

	int q;
	cin >> q;
	while(q--){
		int nums;
		cin >> nums;

		if(isPrime[nums]){
			cout << "Prime Number" << endl;
		}
		else{
			cout << "Not Prime Number" << endl;
		}
	}
}