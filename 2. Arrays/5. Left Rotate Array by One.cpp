// Given an integer array nums, rotate the array to the left by one.

// Note: There is no need to return anything, just modify the given array.

// Example 1
// Input: nums = [1, 2, 3, 4, 5]
// Output: [2, 3, 4, 5, 1]
// Explanation: 
// Initially, nums = [1, 2, 3, 4, 5]
// Rotating once to left -> nums = [2, 3, 4, 5, 1]

// Example 2
// Input: nums = [-1, 0, 3, 6]
// Output: [0, 3, 6, -1]
// Explanation:
// Initially, nums = [-1, 0, 3, 6]
// Rotating once to left -> nums = [0, 3, 6, -1]

//Time Complexity = O(n)
//Space Complexity = O(1)

#include <utility>

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        
        //Store first element
        int originalFirstElement = nums[0];

        //copy each number to the right, and set the vector position to the left
        for(int i = 0; i < nums.size() - 1; i++)
        {
            nums[i] = nums[i+1];
        }

        //set last element
        nums[nums.size() - 1] = originalFirstElement;
    }
};