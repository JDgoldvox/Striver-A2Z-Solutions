// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

// Example 1
// Input: nums = [8, 8, 7, 6, 5]
// Output: 7
// Explanation:The largest value in nums is 8, the second largest is 7

// Example 2
// Input: nums = [10, 10, 10, 10, 10]
// Output: -1
// Explanation: The only value in nums is 10, so there is no second largest value, thus -1 is returned

//Time Complexity O(n)
//Space Complexity O(1)

#include <limits>

class Solution {
   public:
    int secondLargestElement(vector<int>& nums) {
        // return if only 1 or no elements
        if (nums.size() < 2) return -1;

        int largest = nums[0];
        int secondLargest = INT_MIN;

        for (auto item : nums) {

            //update largest if largest changes to something larger
            if (largest < item) {
                secondLargest = largest;
                largest = item;
            }

            // Only update second largest if larger than second largest
            // and smaller than largest
            if (item < largest && item > secondLargest) {
                secondLargest = item;
            }
        }

        if(secondLargest == INT_MIN) return -1;

        return secondLargest;
    }
};