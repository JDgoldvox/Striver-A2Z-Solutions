// Given an array of integers nums, return the value of the largest element in the array

// Example 1
// Input: nums = [3, 3, 6, 1]
// Output: 6
// Explanation: The largest element in array is 6

// Example 2
// Input: nums = [3, 3, 0, 99, -40]
// Output: 99
// Explanation: The largest element in array is 99

//Time Complexity O(n)
//Space Complexity O(1)

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];

        for(auto item : nums)
        {
            if(item > largest)
            {
                largest = item;
            }
        }

        return largest;
    }
};