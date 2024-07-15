#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > subsets;

void generate(vector<int> &subset, int i, vector<int> &nums)
{
	if (i == nums.size())
	{
		subsets.push_back(subset);
		return;
	}

	// ith element not in subset
	generate(subset, i+1, nums);

	//ith element in subset
	subset.push_back(nums[i]);
	generate(subset, i+1, nums);
	subset.pop_back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> nums[i];
    }
    vector<int> empty;
    generate(empty, 0, nums);
    for(auto subset : subsets)
    {
    	for(auto ele : subset)
    	{
    		cout << ele << " ";
    	}
    	cout << endl;
    }

}


// input  --> 3
//            [1 2 3]

// output --> []
//			  [3] 
//			  [2] 
//			  [2 3] 
//			  [1] 
//			  [1 3] 
//			  [1 2] 
//			  [1 2 3]










