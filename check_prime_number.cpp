#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	// if(n == 1){
	// 	cout << 0 << endl;
	// }

	// bool isPrime = true;
	// for (int i = 2; i <= n; ++i){ // i*i <= n
	// 	if(n % i == 0){
	// 		isPrime = false;
	// 		break;
	// 	}
	// }

	// cout << isPrime << endl;
	// O(n)

	// Prime Factorisation
	vector<int> prime_factors;
	for (int i = 2; i * i <= n; ++i){
		while(n % i == 0){
			prime_factors.push_back(i);
			n /= i;
		}
	}
	if(n>1){
		prime_factors.push_back(n);
	}

	for(auto prime : prime_factors){
		cout << prime << " ";
	}
	// O(n)
}