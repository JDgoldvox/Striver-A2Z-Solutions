// Given an array of integers called nums,sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.

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

//Time Complexity = O(n^2)
//Space Complexity = 1
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        
        while(true)
        {
            bool isSorted = true;
            for(int i = 0; i < nums.size() - 1; i++)
            {
                if(nums[i] > nums[i+1])
                {
                    //swap
                    int temp = -1;
                    temp = nums[i];
                    nums[i] = nums[i+1];
                    nums[i+1] = temp;
                    isSorted = false;
                }
            }

            if(isSorted) break;
        }

        return nums;
    }
};
