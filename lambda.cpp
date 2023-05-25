#include <bits/stdc++.h>
using namespace std;

int main()
{
	// lambda fuction

	// cout << [](int x){return x+2;}(2);

	// auto sum = [](int x, int y){return x+y;};

	// cout << sum(3, 6) << endl;


	// ------------

    vector <int> v = {2, 3, 5};

    cout << all_of(v.begin(), v.end(), 
    	[](int x) {return x > 0;}) << endl;

    cout << any_of(v.begin(), v.end(),
    	[](int x) {return x > 0;}) << endl;

    cout << none_of(v.begin(), v.end(),
    	[](int x) {return x > 0;}) << endl;

}