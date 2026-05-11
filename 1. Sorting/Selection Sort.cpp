// Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.

// A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.

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

class Solution {
public:
    //Time Complexity: O(n^2)
    //Space Complexity O(1)
    vector<int> selectionSort(vector<int>& nums) {

        //loop through 0 -> n-1
        for (int i = 0; i < nums.size() - 1; i++)
        {
            //loop through all elements, starting from already sorted
            int smallestIndex = i; //assume current index is smallest
            for (int j = i; j < nums.size(); j++)
            {
                if (nums[j] < nums[smallestIndex])
                {
                    smallestIndex = j;
                }
            }

            //swap values with smallest value index found
            int temp = nums[smallestIndex];
            nums[smallestIndex] = nums[i];
            nums[i] = temp;
        }

        return nums;
    }
};
