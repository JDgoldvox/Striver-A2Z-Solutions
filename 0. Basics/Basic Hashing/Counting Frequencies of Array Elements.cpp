#include <unordered_map>
#include <vector>
#include <algorithm>

// Given an array nums of size n which may contain duplicate elements.
// Rreturn a list of pairs where each pair contains a unique element from the array and its frequency in the array.
// You may return the result in any order, but each element must appear exactly once in the output.

// Example 1
// Input: nums = [1, 2, 2, 1, 3]
// Output: [[1, 2], [2, 2], [3, 1]]
// Explanation:
// - 1 appears 2 times
// - 2 appears 2 times
// - 3 appears 1 time
// Order of output can vary.

// Example 2
// Input: nums = [5, 5, 5, 5]
// Output: [[5, 4]]
// Explanation:
// - 5 appears 4 times.

class Solution {
public:

    //Time Complexity O(n)
    //Space Complexity O(unique elements)
    vector<vector<int>> countFrequencies(vector<int>& nums) {

        std::unordered_map<int, int> frequency;

        //loop through all numbers
        for (auto n : nums)
        {
            frequency[n]++;
        }

        //turn into vectors
        std::vector<vector<int>> a;

        for (const auto& n : frequency)
        {
            a.push_back({ n.first,n.second });
        }

        return a;
    }
};