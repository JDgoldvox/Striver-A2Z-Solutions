// Given an integer array nums and a non-negative integer k, rotate the array to
// the left by k steps.

// Example 1
// Input: nums = [1, 2, 3, 4, 5, 6], k = 2
// Output: nums = [3, 4, 5, 6, 1, 2]
// Explanation:
// rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

// Example 2
// Input: nums = [3, 4, 1, 5, 3, -5], k = 8
// Output: nums = [1, 5, 3, -5, 3, 4]
// Explanation:
// rotate 1 step to the left: [4, 1, 5, 3, -5, 3]
// rotate 2 steps to the left: [1, 5, 3, -5, 3, 4]
// rotate 3 steps to the left: [5, 3, -5, 3, 4, 1]
// rotate 4 steps to the left: [3, -5, 3, 4, 1, 5]
// rotate 5 steps to the left: [-5, 3, 4, 1, 5, 3]
// rotate 6 steps to the left: [3, 4, 1, 5, 3, -5]
// rotate 7 steps to the left: [4, 1, 5, 3, -5, 3]

#include <algorithm>

class Solution {
   public:
    // Example 1
    // Time Complexity = O(2n)
    // Space Complexity = O(1)
    // Explanation: Math trick, to rotate LEFT, reverse left and right sides, and then reverse all
    void rotateArray(vector<int>& nums, int k) 
    {   
        int beginningIndex;

        if(nums.size() <= k)
        {   
            beginningIndex = k % nums.size();
        }
        else
        {
            beginningIndex = k;
        }
        
        if(beginningIndex == 0) return;

        //reverse left and right, and then reverse all
        std::reverse(nums.begin(), nums.begin() + beginningIndex); //left
        std::reverse(nums.begin() + beginningIndex, nums.end()); //right
        std::reverse(nums.begin(), nums.end()); //all
    }

    // //Example 2
    // //Time Complexity = O(n)
    // //Space Complexity = O(k)
    // void rotateArray(vector<int>& nums, int k) {

    //     //find which index to split vector
    //     int newBeginingIndex;

    //     if(k >= nums.size())
    //     {
    //         newBeginingIndex = k % nums.size();
    //     }
    //     else
    //     {
    //         newBeginingIndex = k;
    //     }

    //     if(newBeginingIndex == 0) return;

    //     std::vector<int> leftOfIndex;
    //     //copy values left of index
    //     for(int i = 0; i < newBeginingIndex ; i++)
    //     {
    //         leftOfIndex.push_back(nums[i]);
    //     }

    //     //start moving values
    //     int index = 0;
    //     for(int i = newBeginingIndex; i < nums.size(); i++)
    //     {
    //         nums[index] = nums[i];
    //         index++;
    //     }

    //     //Add original values back starting at index
    //     for(auto num : leftOfIndex)
    //     {
    //         nums[index] = num;
    //         index++;
    //     }
    // }
};