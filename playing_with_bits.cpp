#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for (int i = 10; i >= 0; --i){
		cout << ((num >>i) & 1);
	}
	cout << endl;
}

int main()
{
	int a = 9;

	printBinary(9);

	int i = 2;

	if ((a & (1 << i)) != 0){
		cout << "set bit" << endl;
	}
	else{
		cout << "unset bit" << endl;
	}

	// bit set

	printBinary(a | (1 << i));

	// bit unset

	printBinary(a & (~(1 << i)));

	// toggle

	printBinary(a ^ (a << i));

	// cout set bit

    int ct = 0;
	for (int i = 31; i >= 0; --i){
		if ((a & (1 << i)) != 0){
			ct++;
		}
	}
	cout << ct << endl;

	// cout set bit --> in built func

    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcountll(1LL << 32) << endl;
}

