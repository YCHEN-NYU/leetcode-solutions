// two sum
#include <iostream>
#include <unordered_map>
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
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
        	temp[target - *it] = distance(it, it.begin());
        }
    }
};

int main() {
	Solution test;
	vector<int> testArray = [2, 7, 11, 15];
	int target = 9;
	Solution.twoSum(testArray, target);
}
