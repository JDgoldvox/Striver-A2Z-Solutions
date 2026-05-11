#include <unordered_map>

// Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.

// Example 1
// Input: nums = [1, 2, 2, 3, 3, 3]
// Output: 3
// Explanation: The number 3 appears the most (3 times). It is the most frequent element.

// Example 2
// Input: nums = [4, 4, 5, 5, 6]
// Output: 4
// Explanation: Both 4 and 5 appear twice, but 4 is smaller. So, 4 is the most frequent element.

class Solution {
public:
    //Time Complexity: O(n)
    //Space Complexity: O(n)
    int mostFrequentElement(vector<int>& nums) {
        std::unordered_map<int, int> freq;

        for (const auto& n : nums)
        {
            freq[n]++;
        }

        int smallestValue = -1;
        int count = -1;

        for (const auto& [num, freq] : freq)
        {
            if ((freq > count))
            {
                smallestValue = num;
                count = freq;
            }
            else if (count == freq && (smallestValue > num))
            {
                smallestValue = num;
                count = freq;
            }
        }

        return smallestValue;
    }
};