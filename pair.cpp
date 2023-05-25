#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // pair<int, string> p;

    // p = make_pair(2, "sabbir");
    // // p = {2, "chy"};

    // pair<int, string> &p1 = p;

    // p1.first = 3;

    // cout << p.first << " " << p.second << endl;

    pair<int, int> p_array[3];

    p_array[0] = make_pair(1, 2);
    p_array[1] = make_pair(2, 3);
    p_array[2] = make_pair(3, 4);

    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}