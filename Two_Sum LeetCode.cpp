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
        int left_index, right_index;
        
        // Size of array
        int n;
        n = sizeof(nums)/(sizeof(nums[0]));

        /* step -1) Sort the array in ascending order*/
        sort(nums.begin(), nums.begin()+n);
        
        /* Step -2) Initialize two index variables to find the candidate 
            elements in the sorted array.
            
            (a) Initialize first to the leftmost index: l = 0
            (b) Initialize second  the rightmost index:  r = artray_size-1 */
        
        left_index = 0;
        right_index = n - 1;

        /* Step -3) Loop while left_index < right_index.
            (a) If (Array[left_index] + Array[right_index] == sum)  then return 1
            (b) Else if( Array[left_index] + Array[right_index] <  sum )  then left_index++
            (c) Else right_index-- */
        
        while (left_index < right_index)
        {
            if (nums[left_index] + nums[right_index] == target)
            {
                index.push_back(left_index);
                index.push_back(right_index);
                break;
            }
            else if (nums[left_index] + nums[right_index] < target)
            {
                left_index++;
            }
            else
            {
                right_index--;
            }
        }

        /* Step -4) If no candidates in whole array - return 0 */
        return index;
    }
};
