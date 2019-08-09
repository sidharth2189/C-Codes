/*
	*** Search Insert Position ***
	Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

	It is assumed that there are no duplicates in the array.

	Example 1:

	Input: [1,3,5,6], 5
	Output: 2
	Example 2:

	Input: [1,3,5,6], 2
	Output: 1
	Example 3:

	Input: [1,3,5,6], 7
	Output: 4
	Example 4:

	Input: [1,3,5,6], 0
	Output: 0
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int index = 0; index < nums.size(); index++)
        {
            if ((nums[index] == target) || (nums[index] > target))
            {
                return index;
            }
            else if (index == (nums.size() - 1))
            {
                return (index+1);
            }
            else if (nums[index+1] > target)
            {
                return (index+1);
            }
        }
        return NULL;  
    }
};