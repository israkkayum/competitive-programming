#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	int ct = 0;
	int sum = 0;

	// basic approach -- > O(n)

	for (int i = 1; i <= n; ++i){
		if(n % i == 0){
			cout << i << endl;
			ct += 1;
			sum += i;
		}
	}
	cout << ct << " " << sum << endl;

	// sqrt formula -- > O(sqrt(n))
	for (int i = 1; i * i <= n; ++i) // i <= sqrt(n)
	{
		if(n % i == 0){
			cout << i << " " << n/i << endl;
			ct += 1;
			sum += i;

			if(n / i != i){
				ct += 1;
				sum += n/i;
			}
		}
	}
	cout << ct << " " << sum << endl;


	// more optimize formula for find ct and sum
    
    // x = p1^n1 * p2^n2 * .... * pt^nt

	// ct = (n1+1) * (n2 + 1) * .... * (nt + 1)

	// sum = p1^(n1+1) - 1 / p1 - 1 * p2^(n2+1) - 1 / p2 - 1 .....
}