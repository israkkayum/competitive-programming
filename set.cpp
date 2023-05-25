#include <bits/stdc++.h>
using namespace std;


void printVec(set<string> &s){

	for (auto value : s)
	{
		cout << value << endl;
	}
}

int main()
{
	set<string> s;

	s.insert("abc");
	s.insert("edfg");
	s.insert("frfdv");
	s.insert("ftgg");


    printVec(s);

}