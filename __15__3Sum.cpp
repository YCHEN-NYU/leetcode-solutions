/*
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/
// TODO: use 2sum solution to construct a 3sum solution

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Two Sum Solution 


class Solution {
public:
	// threeSum
	vector<vector<int>> threeSum(vector<int> & nums)
	{
		int target = 0;
		vector<vector<int>> result = {};
		vector<int> subset = {}, newtargets = {};
		
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
		{
        	subset.push_back(target - *it);
        	newtargets.push_back(*it);
        }

    vector<int> tempIndex = {}, tempVec = {};
    for(vector<int>::iterator it = newtargets.begin(); it != newtargets.end(); ++it)
    {
    	tempIndex = twoSum(subset, *it); // use two sum function
    	vector<int>::iterator inner_it;

    	if(!tempIndex.empty())
    	{
	    	{
	    		tempVec = {};
	    		inner_it = tempIndex.begin();
	    		while(inner_it != tempIndex.end())
	    		{
	    			tempVec = {};
	    			if(*inner_it != distance(newtargets.begin(), it) && \
	    				*(inner_it + 1) != distance(newtargets.begin(), it))
	    			{
	    				tempVec.push_back(*it);
	    				tempVec.push_back(nums[*inner_it]);
	    				tempVec.push_back(nums[*(inner_it+1)]);
	    				sort(tempVec.begin(), tempVec.end()); // sort indices from low to high
	    				result.push_back(tempVec);
	    				sort(result.begin(), result.end());
	    				result.erase(unique(result.begin(), result.end()), result.end());
	    			}
	    			inner_it += 2;
	    		}
	    	}
	    }
	  }
// 	  sort(result.begin(), result.end());
// 	  result.erase(unique(result.begin(), result.end()), result.end());

  	return result;
	}


	// two sum
	vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> temp;
    vector<int> twoSumresult = {};
    
    for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
    	temp[target - *it] = distance(nums.begin(), it);
    }

    for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
    	if(temp.find(*it) != temp.end() \
    		 && temp[*it] != distance(nums.begin(), it)) 
    	{
    		twoSumresult.push_back(distance(nums.begin(), it)); // first index
    		twoSumresult.push_back(temp[*it]); // second index
    		//break;
    	}
    }

    return twoSumresult; 
	}
};

// ============

void print_vec(vector<int> & vec){
	for (auto it = vec.begin(); it != vec.end(); ++it){
		cout << *it << " ";
	} cout << endl;
}



int main () {
	vector<int> S = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
	int target = 0;
	Solution test;
	vector<vector<int>> result;
	result = test.threeSum(S);

	for(auto it = result.begin(); it != result.end(); ++it){
		print_vec(*it);
	}
	return 0;
}