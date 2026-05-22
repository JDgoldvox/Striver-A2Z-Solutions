// Given an array of integers nums, sort the array in non-decreasing order using the recursive Insertion Sort algorithm, and return the sorted array.

// You must implement Insertion Sort using recursion only.
// Do not use loops (like for or while) or built-in sorting functions (sort, Arrays.sort, etc.).
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all elements that come before it.

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

//Time Complexity O(n^2)
//Space Complexity O(n)

#include <utility>
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        Algorithm(nums, 1);
        return nums;
    }

    void Algorithm(vector<int>& nums, int n)
    {
        if(n >= nums.size()) return;

        int i = n;
        while(nums[i] < nums[i-1] && i > 0)
        {
            std::swap(nums[i],nums[i-1]);
            i--;
        }

        Algorithm(nums, n+1);
    }
};
