/*

*** Two Sum ***
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/

class Solution {
public:
    vector<int> index;
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i, j, sum ;
        //vector<int> index;
        for (i = 0; i < sizeof(nums); i++)
        {
            for (j = i + 1; j < sizeof(nums); j++)
            {
                sum = nums[i] + nums[j];
                if (sum == target)
                {
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }   
            }
        }
        return index;
    }
};