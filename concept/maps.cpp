#include <bits/stdc++.h>
using namespace std;

void printVec(map<int, string> m) 
{
	// map<int, string> ::iterator it;

    // for (it = m.begin(); it != m.end(); ++it)
    // {
    // 	cout << (*it).first << " " << (*it).second << endl;
    //  }

    for(auto &it : m)
    {
    	cout << it.first << " " << it.second << endl;
    }

}



int main()
{
	map<int, string> m;

	m[1] = "abx";
	m[3] = "sabbir";
	m[5] = "fdg";
    m.insert({4, "erf"});

    auto it = m.find(9 );

    if (it == m.end())
    {
    	cout << "No value" << endl;
    }
    else
    {
       cout << (it -> first) << " " << (it -> second) << endl;
    }


    // printVec(m);
}











