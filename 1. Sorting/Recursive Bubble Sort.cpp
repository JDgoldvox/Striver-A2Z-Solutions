// Given an array of integers nums, sort the array in non-decreasing order using the recursive Bubble Sort algorithm, and return the sorted array.

// You must implement Bubble Sort using recursion only.
// Do not use built-in sorting functions (sort, sorted, Arrays.sort, etc.).
// A sorted array in non-decreasing order is an array where each element is greater than or equal to the previous one.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]
// Explanation: 1 <= 3 <= 4 <= 5 <= 7.
// Thus the array is sorted in non-decreasing order.

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]
// Explanation: 1 <= 1 <= 4 <= 4 <= 5.
// Thus the array is sorted in non-decreasing order.

#include <utility>

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        Aglorithm(nums,nums.size());
        return nums;
    }

    void Aglorithm(vector<int>& nums, int n)
    {
        bool sorted = true;
        //perform one pass of bubble bubbleSort
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                std::swap(nums[i], nums[i+1]);
                sorted = false;
            }
        }

        if(sorted)
        {
            return;
        }

        Aglorithm(nums, n-1);
    }


};
