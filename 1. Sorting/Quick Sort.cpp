// Given an array of integers called nums, sort the array in non-decreasing order using the quick sort algorithm and return the sorted array.

// A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.

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

//Time complexity O(nlog(n))
//space complexity O(n)
#include <utility>

class Solution {
   public:
    vector<int> quickSort(vector<int>& nums) {
        Algorithm(nums, 0, nums.size() - 1);
        return nums;
    }

    void Algorithm(vector<int>& nums, int low, int high) {

        if (low >= high) return;
        int part = partition(nums, low, high);
        // sort left
        Algorithm(nums, low, part - 1);
        // sort right
        Algorithm(nums, part + 1, high);
    }

    int partition(vector<int>& nums, int low, int high) 
    {
        int pivot = nums[low];
        int left = low + 1;
        int right = high;
        
        while(left <= right)
        {
            //find value bigger than pivot from left side
            while(left <= right && nums[left] <= pivot)
            {
                left++;
            }

            //find something smaller than the pivot from right side
            while(left <= right && nums[right] > pivot)
            {
                right--;
            }

            if(left < right)
            {
                std::swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }

        //swap first element with left element only if left element is still
        std::swap(nums[low], nums[right]);
        
        return right;
    }
};
