#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector<bool> isPrime(N, 1);
vector<int> lp(N, 0), hp(N, 0);

vector<int> divisors[N];

int main(){
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i < N; ++i)
	{
		if(isPrime[i] == true){
			lp[i] = hp[i] = i;
			for (int j = 2*i; j < N; j += i)
			{
				isPrime[j] = false;
				hp[j] = i;
				if(lp[j] == 0){
					lp[j] = i;
				}
			}
		}
	}

	// for (int i = 1; i < 100; ++i)
	// {
	// 	cout << lp[i] << " " << hp[i] << endl;
	// }

	// factorization

	int num;
	cin >> num;

    vector<int> prime_factors;

    while(num > 1){
    	int prime_factor = hp[num];
    	while(num % prime_factor == 0){
    		num /= prime_factor;
    		prime_factors.push_back(prime_factor);
    	}
    }

    // for(auto factor : prime_factors){
    // 	cout << factor << " ";
    // }

    // divisors

    for (int i = 2; i < N; ++i)
    {
    	for (int j = i; j < N; j += i)
    	{
    		divisors[j].push_back(i);
    	}
    }

    for (int i = 1; i < 10; ++i)
    {
    	for(int div : divisors[i]){
    		cout << div << " ";
    	}
    	cout << endl;
    }
}




