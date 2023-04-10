#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
	for (int i = 10; i >= 0; --i)
	{
		cout << ((num >> i) & 1);
	}
	cout << endl;
}

int main()
{
	for (int i = 0; i < 8; ++i)
	{
		// printBinary(i);
	}

	int n = 5;

	// odd, even

    if (n&1){
        cout << "odd" << endl;
	}
	else{
		cout << "even" << endl;
	}

	// div/mult

	cout << (n >> 1) << endl; // 5/2
	cout << (n << 1) << endl; // 5*2

	// uppercase/lowercase

	for (char c = 'A'; c <= 'Z'; ++c)
	{
		// cout << c << endl;
		// printBinary(c);
	}

	// uppercase --> lowercase

	char A = 'A';
	char a = A | (1<<5);
	cout << a << endl;

	// or

	cout << char('C' | ' ') << endl;

	// lowercase --> uppercase

	char b = 'b';
	char B = (b & (~(1<<5)));
	cout << B << endl;

	// or

	cout << char('z' & '_') << endl;

	// clear LSB

	int l = 59;
	printBinary(l);
    int i = 4;
    int s = (l & (~((1<<(i+1)) - 1)));
    printBinary(s);

    // clear MSB

    int q = (l & ((1 << (i+1)) - 1));
    printBinary(q);

    // check power of 2

    int k = 17;

    if(k & (k-1)){
    	cout << "not power of 2" << endl;
    }
    else{
    	cout << "power of 2" << endl;
    }

}