// Given an integer array nums, move all the 0's to the end of the array. The
// relative order of the other elements must remain the same.

// This must be done in place, without making a copy of the array.

// Example 1
// Input: nums = [0, 1, 4, 0, 5, 2]
// Output: [1, 4, 5, 2, 0, 0]
// Explanation: Both the zeroes are moved to the end and the order of the other
// elements stay the same

// Example 2
// Input: nums = [0, 0, 0, 1, 3, -2]
// Output: [1, 3, -2, 0, 0, 0]
// Explanation: All 3 zeroes are moved to the end and the order of the other
// elements stay the same

#include <utility>
class Solution {
   public:

    //Solution 2
    //Time Complexity = O(n)
    //Space Complexity = O(1)
    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 1) return;

        int left = 0;
        for(int right = 0; right < nums.size(); right++)
        {
            if(nums[right] != 0)
            {
                //swap with left 
                std::swap(nums[left], nums[right]);
                left++;
            }
        }
    }

    //Solution 2
    //Time Complexity = O(3n)
    //Space Complexity = O(1)
    //Explanation: count all zeros, move them down with two pointers, and then add zeroes from right side
    // void moveZeroes(vector<int>& nums) {
    //     if (nums.size() == 1) return;

    //     int zeroCount = 0;

    //     // count zeros
    //     for (int i = 0; i < nums.size(); i++) {
    //         if (nums[i] == 0) zeroCount++;
    //     }

    //     // move right to left position
    //     int left = 0;
    //     int right = 0;

    //     int nonZeroNums = nums.size() - zeroCount;
    //     for (int right = 0; right < nums.size(); right++) {
    //         // skip zeros
    //         if (nums[right] == 0) continue;

    //         // move number to left side
    //         nums[left] = nums[right];
    //         left++;
    //     }

    //     // add zeros going backwards according to zeroCount
    //     for (int i = nums.size() - 1; i >= nums.size() - zeroCount; i--) {
    //         nums[i] = 0;
    //     }
    // }

    // int right = nums.size() - 1;

    // //look for zeros
    // for(int left = 0; left < right; left++)
    // {
    //     if(nums[left] != 0)
    //     {
    //         continue;
    //     }

    //     //when we find zero, find suitable place to swap
    //     while(left != right)
    //     {
    //         //look for value that isn't a zero
    //         if(nums[right] != 0)
    //         {
    //             break;
    //         }
    //         right--;
    //     }

    //     //swap left and right
    //     std::swap(nums[left], nums[right]);
    // }
};