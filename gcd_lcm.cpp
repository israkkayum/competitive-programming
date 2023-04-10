#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int main()
{
	cout << gcd(4, 12) << endl;
	cout << gcd(18, 12) << endl;

	cout << __gcd(2, 4) << endl;

	// lcm

	cout << 4 * 12 / gcd(4, 12) << endl;
}