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
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /* vector to hold output */
        vector<int> index;
        
        /* Create a copy of the input array */
        vector<int> nums_cpy;
        nums_cpy.assign(nums.begin(), nums.end());

        /* step -1) Sort the array in ascending order */
        sort(nums_cpy.begin(), nums_cpy.end());
        
        /* Step -2) Initialize two variables to find the candidate 
            elements in the sorted array.
            
            (a) Initialize first to the leftmost array element address
            (b) Initialize second  the rightmost array element address  */

        auto left = nums_cpy.begin();
        auto right = nums_cpy.end() - 1;

        /* Step -3) Loop while left_index < right_index.
            (a) If (Array[left_index] + Array[right_index] == sum)  then return indices
            (b) Else if( Array[left_index] + Array[right_index] <  sum )  then left_index++
            (c) Else right_index-- */
        
        while (left < right)
        {
            if (*left + *right == target)
            {
                for (int i = 0; i < nums.size(); i++) 
                {
                    if (nums[i] == *left) 
                    {
                        index.push_back(i);
                    } 
                    else if(nums[i] == *right) 
                    {
                        index.push_back(i);
                    }
                }
                return index;
            }
            else if (*left + *right< target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        /* Step -4) If no candidates in whole array - return null vector */
        return vector<int>();
    }
};
