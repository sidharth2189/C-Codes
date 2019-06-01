/*

*** Two Sum ***
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/

#include <iostream>

using namespace std;

struct indices
{
    int index1;
    int index2;
};

indices Two_Sum(int numsa[], int target);

int main()
{
    int nums[] = {16,13,2,7,11,15};
    int target = 9;
    indices index;
    index = Two_Sum(nums, target);
    if ((index.index1 == 0) && (index.index1 == 0))
    {
        cout<<"No Solution";
        return 0;
    }
    cout<<index.index1<<", "<<index.index2;
    return 0;
}

indices Two_Sum(int nums[], int target)
{
    int i,j,sum;
    indices index;
    for (i = 0; i < sizeof(nums); i++)
    {
        for (j = i + 1; j < sizeof(nums); j++)
        {
            sum = nums[i] + nums[j];
            if (sum == target)
            {
                index = {i, j};
                return index;
            }   
        }
    }
    index = {0,0};
    return index;
}