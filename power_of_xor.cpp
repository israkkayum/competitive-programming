#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a = 4, b = 6;

	// swap

	a = a ^ b;

	b = b ^ a;  // b --> a

	// b = b ^ (a ^ b) ==> b ^ b ^ a ==> a

    a = a ^ b;  // a --> b

    // a = a ^ b ^ a ==> b

    cout << a << " " << b << endl;
}