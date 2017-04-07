// two sum
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/* 
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]. 
pair {key: value} 
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;
        vector<int> result;
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
        	temp[target - *it] = distance(nums.begin(), it);
        }

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
        	if(temp.find(*it) != temp.end() && temp[*it] != distance(nums.begin(), it)) {
        		result.push_back(distance(nums.begin(), it)); // first index
        		result.push_back(temp[*it]); // second index
        		break; // if the first one is found, break out of the loop
        	}
        }

        return result; 
    }
};

int main() {
	Solution test;
	vector<int> testArray = {2, 7, 11, 15};
	int target = 9;
	vector<int> result;
	result = test.twoSum(testArray, target);

	if(!result.empty()){
		cout << "Indices: ";
		for (auto it = result.begin(); it != result.end(); ++it){
			cout << *it << " ";
		} 
		cout << endl;
	}

	else 
		cout << "No result found!" << endl;
	
}
